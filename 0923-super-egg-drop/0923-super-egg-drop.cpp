class Solution {
public:
    // int f(int k, int n,vector<vector<int>>&dp){
    //    if(n==0||n==1) return n;
    //    if(k==1)return n;
    //    int mini=INT_MAX;

    //    if(dp[k][n]!=-1)  return dp[k][n];
    //    for(int i=1;i<=n;i++){
    //      int temp=1+max(f(k-1,i-1,dp),f(k,n-i,dp));
    //      mini=min(mini,temp);
    //    }
    //    return dp[k][n]= mini;

    // }


    int f(int k, int n,vector<vector<int>>&dp){
       if(n==0||n==1) return n;
       if(k==1)return n;
       int mini=INT_MAX;

       if(dp[k][n]!=-1)  return dp[k][n];
       int low=0;
       int high=n;
       int temp=0;

       while(low<=high){
        int mid=(low+high)/2;
        int left=f(k-1,mid-1,dp);
        int right=f(k,n-mid,dp);

        temp=1+max(left,right);

        if(left<right) low=mid+1;
        else high=mid-1;
        mini=min(mini,temp);
       }
       return dp[k][n]=mini;

    }


    int superEggDrop(int k, int n) {
        // k--eggs
        // n--floors
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        return f(k,n,dp);
    }
};