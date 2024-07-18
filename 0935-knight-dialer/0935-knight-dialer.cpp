class Solution {
public:
int M=1e9+7;
vector<vector<int>>adj={
   {4,6}, {6,8},{7,9},{4,8},{0,3,9},{},{0,1,7},{2,6},{1,3},{2,4}

};

int solve(int n,int &nextcell,vector<vector<int>>&dp){
if(n==0) return 1;

if(dp[n][nextcell]!=-1) return dp[n][nextcell];
int ans=0;


for(int next:adj[nextcell]){
  
    ans=(ans+solve(n-1,next,dp))%M;
}
return dp[n][nextcell]=ans;

}
    int knightDialer(int n) {
        int ans=0;
        vector<vector<int>>dp(n,vector<int>(10,-1));
        for(int cell=0;cell<10;cell++){
            ans=(ans+solve(n-1,cell,dp))%M;
        }
        return ans;
    
    }
};