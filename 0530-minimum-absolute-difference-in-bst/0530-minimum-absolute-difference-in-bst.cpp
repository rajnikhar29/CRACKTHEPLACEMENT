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
void inorder(TreeNode* node,vector<int>&arr){
    if(!node)return;
    inorder(node->left,arr);
    arr.push_back(node->val);
    inorder(node->right,arr);
    // will give array in sorted manner
}

    int getMinimumDifference(TreeNode* root) {
        vector<int>arr;
        inorder(root,arr);
        int mini=INT_MAX;
        for(int i=1;i<arr.size();i++){
            mini=min(mini,arr[i]-arr[i-1]);
        }
        return mini;
    }
};