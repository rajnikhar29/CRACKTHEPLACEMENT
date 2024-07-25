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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;

        if(root==NULL) return ans;
        q.push(root);

        while(!q.empty()){
            int levelSize=q.size();
            vector<int>v;

            for(int i=0; i<levelSize;i++){
                TreeNode*currentNode=q.front();
                q.pop();

                v.push_back(currentNode->val);
                if(currentNode->left!=NULL)q.push(currentNode->left);
                if(currentNode->right!=NULL)q.push(currentNode->right);
            }
            ans.push_back(v);
        }
        return ans;
    }
};