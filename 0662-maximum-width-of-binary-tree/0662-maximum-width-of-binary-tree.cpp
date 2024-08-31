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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int maxWidth=0;


        while(!q.empty()){
            int l=q.front().second;
            int r= q.back().second;
            int n=q.size();
             maxWidth=max(maxWidth,r-l+1);

             while(n--){
                TreeNode*curr=q.front().first;
                int idx=q.front().second;
                q.pop();

                if(curr->left) q.push({curr->left,2*idx+1});
                if(curr->right) q.push({curr->right,2*idx+2});
             }
        }

        return maxWidth;
    }
};