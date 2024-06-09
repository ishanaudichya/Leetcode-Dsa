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
void postorder(TreeNode* root1, vector<int> &ans){
        if(root1) {
        postorder(root1->left,ans);
        postorder(root1->right,ans);
        ans.push_back(root1->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> output;
        postorder(root,output);
        return output;
    }
};