class Solution {
public:
   bool check(int start,vector<vector<int>>&adj, vector<int>&vis){
    queue<int>q;
    q.push(start);
    vis[start]=0;

    while(!q.empty()){
        int node=q.front();
        q.pop();

        for(auto it:adj[node]){
           if(vis[it]==-1){//agr colored nhi h to doosre color se krdo
            vis[it]=!vis[node];
            q.push(it);
           }
        //    nhi to same color h to false return
        else if(vis[it]==vis[node]) return false;
        }

        
    }
    return true;
      
   }

    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>adj(n);
        // adjacency list
        //  for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(graph[i][j]==1 && i!=j){
        //         adj[i].push_back(j);
        //         adj[j].push_back(i);
        //         }
        //     }
        // }
        vector<int>vis(n,-1);

        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                if(check(i,graph,vis)==false) return false;
            }
        }
        return true;

    }
};