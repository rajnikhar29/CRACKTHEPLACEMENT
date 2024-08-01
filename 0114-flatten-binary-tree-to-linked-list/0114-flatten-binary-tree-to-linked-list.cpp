/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    // T.C-O(N),S.C-O(N)--TODO JODO
    // TreeNode*prev=NULL;
    // void flatten(TreeNode* root) {
    //     if(root==NULL) return;
    //     flatten(root->right);
    //     flatten(root->left);
    //     root->right=prev;//connecting link
    //     root->left=NULL;
    //     prev=root;
    // }

    // T.C-O(N),S.C-O(N)
    // void flatten(TreeNode* root) {
    //     if(root==NULL) return;
    //     stack<TreeNode*> st;
    //     st.push(root);

    //     while (!st.empty()) {
    //         TreeNode* curr = st.top();
    //         st.pop();

    //         if (curr->right)
    //             st.push(curr->right);
    //         if (curr->left)
    //             st.push(curr->left);

    //         if (!st.empty())
    //             curr->right = st.top(), curr->left = NULL;
    //     }
    // }

    void flatten(TreeNode* root){
        TreeNode*curr=root;

        while(curr!=NULL){
            if(curr->left!=NULL){
            TreeNode*prev=curr->left;

                while(prev->right!=NULL){
                    prev=prev->right;
                }
                
                prev->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
                
            }
            curr=curr->right;
                

        }
    }

    
};