class Solution {
public:
    int f(int ind,int T ,vector<int>& coins, vector<vector<int>> &dp){
        if(ind==0){
            if(T%coins[0]==0) return T/coins[0];
            else return 1e9;
        }
        
        if(dp[ind][T]!=-1) return dp[ind][T];
        int notTake=0+f(ind-1,T,coins,dp);
        int take=1e9;
        if(T>=coins[ind]) {
            take=1+f(ind,T-coins[ind],coins,dp);
        }
        return dp[ind][T]=min(take,notTake);
        
    }
    int coinChange(vector<int>& coins, int T) {
        int n= coins.size();
        vector<vector<int>> dp(n,vector<int>(T+1,-1));
        int ans= f(n-1,T,coins,dp);
        
        if(ans>=1e9) return -1;
        else return ans;
    }
};