class Solution {
public:
    
    void dfs(int node,vector<int>ls[],vector<int>&vis){
        vis[node]=1;
        
        for(auto it:ls[node]){
            if(!vis[it]){
                dfs(it,ls,vis);
            }
        }
    }
    
    
    
    
    int findCircleNum(vector<vector<int>>& adj) {
        
        int n= adj.size();
        vector<int>ls[n];
        //adjacency list bnale pehle
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj[i][j]==1 && i!=j ){
                    ls[i].push_back(j);
                    ls[j].push_back(i);
                }
            }
        }
        
       
            vector<int>vis(n);
            int cnt=0;
            for(int i=0;i<n;i++){
                if(!vis[i]){
                    cnt++;
                    dfs(i,ls,vis);
                }
            }
        return cnt;
                
            
        
    }
};