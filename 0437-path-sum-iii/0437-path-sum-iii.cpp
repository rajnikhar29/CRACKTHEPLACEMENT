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
int cnt=0;
int f(TreeNode*root,long long sum){
    if(root==NULL) return 0;
    if(sum==root->val) cnt++;

    f(root->left,sum-root->val);
    f(root->right,sum-root->val);
    return cnt;


}
    int pathSum(TreeNode* root, int target) {
        if(root){
            f(root,target);
            pathSum(root->left,target);
            pathSum(root->right,target);

        }
        return cnt;
    }
};