/**
 * 102. Binary Tree Level Order Traversal
 * https://leetcode.com/problems/binary-tree-level-order-traversal/discuss/402410/C%2B%2B-4ms-faster-than-93.44-easy-understanding)
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr) return vec;
        q.push(root);
        int q_sz;
        while(!q.empty()){
            q_sz = q.size();
            for(int i=0; i<q_sz;++i){
                TreeNode* cur = q.front();
                q.pop();
                interior_vec.push_back(cur->val);
                if(cur->left != nullptr) q.push(cur->left);
                if(cur->right != nullptr) q.push(cur->right);
            }
            vec.push_back(interior_vec);
            interior_vec.clear();
        }
        return vec;
    }
private:
    vector<vector<int>> vec;
    vector<int> interior_vec;
    queue<TreeNode*> q;
};
