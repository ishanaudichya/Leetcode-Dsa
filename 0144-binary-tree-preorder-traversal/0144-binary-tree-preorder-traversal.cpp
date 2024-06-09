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
    void preorder(TreeNode* root1, vector<int> &ans){
        if(root1) {
        ans.push_back(root1->val);
        preorder(root1->left,ans);
        preorder(root1->right,ans);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> output;
    preorder(root, output);
    return output;

}
};
