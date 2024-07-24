class Solution {
public:
unordered_map<int,int>mp;
    bool f(int index,int prev,vector<int>&stones,vector<vector<int>>&dp){
        int n=stones.size();
        if(index>n) return false;
        if(index==n-1) return true;
        if(dp[index][prev]!=-1) return dp[index][prev];
        bool result=false;
        for(int nextJump=prev-1;nextJump<=prev+1;nextJump++){
            if(nextJump>0){
                int next_stone=stones[index]+nextJump;

                if(mp.find(next_stone)!=mp.end()){
                    result=result|| f(mp[next_stone],nextJump,stones,dp);
                }
            }
        }
        return dp[index][prev]=result;
    }
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        if(stones[1]!=1) return false;
        for(int i=0;i<stones.size();i++){
            mp[stones[i]]=i;
        }
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(0,0,stones,dp);

    }
};