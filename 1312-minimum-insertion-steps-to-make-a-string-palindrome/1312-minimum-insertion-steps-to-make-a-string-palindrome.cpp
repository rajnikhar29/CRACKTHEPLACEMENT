class Solution {
public:
int f(string &s,int i,int j,vector<vector<int>>&dp){
    if(i>=j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==s[j]) return dp[i][j]= f(s,i+1,j-1,dp);
    else return dp[i][j]=1+min(f(s,i+1,j,dp),f(s,i,j-1,dp));
}

// int ff(string &s,int n,int i,int j,vector<vector<int>>&dp){
//     if(i>j) dp[i][j]=0;

//     for(int i=0;i<n;i++){
//         for(int j=n-1;j>=0;j--){
//             if(s[i]==s[j]) dp[i][j]= dp[i+1][j-1];
//             else dp[i][j]=1+min(dp[i+1][j],dp[i][j-1]);
//         }
//     }
//     return dp[0][n-1];
// }
    int minInsertions(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(s,0,n-1,dp);
        // return ff(s,n,0,n-1,dp);

    }
};