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
int f(TreeNode* root){
    if(root==NULL) return 0;
    int lh=f(root->left);
    int rh=f(root->right);
    if(lh==-1||rh==-1)return-1;
    if(abs(lh-rh)>1) return -1;

    return max(lh,rh)+1;
}
    bool isBalanced(TreeNode* root) {
        // if(root==NULL) return false;
        int ans=f(root);
        if(ans==-1) return false;
        else return true;
        
    }
};