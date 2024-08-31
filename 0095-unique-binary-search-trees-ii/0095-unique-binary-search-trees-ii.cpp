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
    vector<TreeNode*> f(int start,int end){
        if(start > end) return {NULL};
        if(start==end){
            TreeNode*root=new TreeNode(start);
            return {root};
        }
        vector<TreeNode*>result;
        for(int i=start;i<=end;i++){
            vector<TreeNode*>leftBST=f(start,i-1);
            vector<TreeNode*>rightBST=f(i+1,end);

            for(TreeNode*left :leftBST){
                for(TreeNode*right:rightBST){
                    TreeNode*root=new TreeNode(i);

                    root->left=left;
                    root->right=right;
                    result.push_back(root);
                }
            }
        }
        return result;
    }
    vector<TreeNode*> generateTrees(int n) {
        return f(1,n);
    }
};