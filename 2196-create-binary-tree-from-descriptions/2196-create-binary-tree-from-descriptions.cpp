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
    TreeNode* createBinaryTree(vector<vector<int>>& arr) {
        unordered_map<int,TreeNode*>mp;
        unordered_set<int>childSet;
            
        for(vector<int>&vec:arr){
            int parent = vec[0];
            int child  = vec[1];
            int isLeft = vec[2];
        
//         already kuch nhi h to parent bnale
        if(mp.find(parent)==mp.end()){
            mp[parent]=new TreeNode(parent);
        }
//         child bnale
        if(mp.find(child)==mp.end()){
            mp[child]=new TreeNode(child);
        }
        
        if(isLeft==1){
            mp[parent]->left=mp[child];
        }
        if(isLeft==0){
            mp[parent]->right=mp[child];
        }
        childSet.insert(child);
        }
        
//         find the root
        for(vector<int>&vec:arr){
            int parent=vec[0];
            if (childSet.find(parent)==childSet.end()){//childset me parent nhi hoga kbhi
                return mp[parent];
            }
        }
        return NULL;
        
        
        
    }
};