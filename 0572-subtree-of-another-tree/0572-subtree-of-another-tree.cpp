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
// T.C-O(N*M)
bool dfs(TreeNode* root, TreeNode*target){
    if(root==NULL && target==NULL) return true;
    if(root==NULL || target==NULL) return false;

    if(root->val != target->val) return false;
    return dfs(root->left,target->left) && dfs(root->right,target->right);
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;
        if(dfs(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);//left ha right kisi b dide me miljaye subroot
    }
};