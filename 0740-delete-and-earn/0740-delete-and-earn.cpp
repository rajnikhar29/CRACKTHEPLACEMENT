class Solution {
public:

int f(int ind,int n,vector<int>& nums,vector<int>&dp){
    if(n==0) return 0;
    if(ind==n) return 0 ;

    if(dp[ind]!=-1) return dp[ind];

    // take
    int curr=nums[ind];
    int sum=nums[ind];
    int index=ind+1;

    while(index <n && nums[index]==curr){
        sum+=curr;
        index++;
    }
    while(index< n && nums[index]==curr+1){
        index++; //ignore kro aur aag bdho
    }
    int take=sum+f(index,n,nums,dp);

    // not take
    int nottake=f(ind+1,n,nums,dp);

    return  dp[ind]=max(take,nottake);


}
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int ans=f(0,n,nums,dp);
        return ans;
    }
};