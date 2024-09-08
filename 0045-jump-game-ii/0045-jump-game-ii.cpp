class Solution {
public:
int f(int ind,vector<int>&nums,vector<vector<int>>dp){
    int n=nums.size();
    if(n==0) return 0;
    if(ind>=n-1) return 1;

    int maxJumps=nums[ind];
    int minJumps=INT_MAX;
    if(dp[ind]!=-1) return dp[ind];

    for(int i=1;i<maxJumps;i++){
        if(ind+i < n){
            int result = f(ind+i,nums,dp);
            if(result!=INT_MAX){
                minJumps=min(minJumps,result+1);
            }
        }
  
    }
    return dp[ind]=minJumps;
}
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(0,nums,dp);
    }
};