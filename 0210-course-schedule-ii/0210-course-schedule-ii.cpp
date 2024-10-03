class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& prerequisite) {
                vector<int>adj[V];

        for(auto it:prerequisite){
            adj[it[1]].push_back(it[0]);
        }

        // TOPOLOGICAL SORT
        vector<int>inDegree(V,0);
		    
		  //  array me store krwa liya
		    for(int i=0;i<V;i++){
		        for(auto &it:adj[i]){
		            inDegree[it]++;
		        }
		    }
		    queue<int>q;
		    vector<int>ans;
		    
		  //  agar indegree 0 h to push krde
		    for(int i=0;i<V;i++){
		        if(inDegree[i]==0){
		            q.push(i);
		        }
		    }
		    
		    while(!q.empty()){
		        int node=q.front();
		        q.pop();
		        ans.push_back(node);
		        
		        for(auto it:adj[node]){
		            inDegree[it]--;
		            if(inDegree[it]==0)q.push(it);
		        }
		    }
		    if(ans.size()==V) return ans;
            return {};
    }
};