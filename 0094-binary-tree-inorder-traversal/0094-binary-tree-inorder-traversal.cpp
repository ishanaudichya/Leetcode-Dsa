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
void inorder(TreeNode* root1, vector<int> &ans){
        if(root1) {
        inorder(root1->left,ans);
        ans.push_back(root1->val);
        inorder(root1->right,ans);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output;
        inorder(root,output);
        return output;
    }
};