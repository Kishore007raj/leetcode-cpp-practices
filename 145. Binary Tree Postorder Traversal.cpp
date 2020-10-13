//recursion
//Runtime: 4 ms, faster than 50.22% of C++ online submissions for Binary Tree Postorder Traversal.
//Memory Usage: 9 MB, less than 8.39% of C++ online submissions for Binary Tree Postorder Traversal.
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    
    void postorder(TreeNode* node){
        if(!node) return;
        postorder(node->left);
        postorder(node->right);
        ans.push_back(node->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return ans;
    }
};
