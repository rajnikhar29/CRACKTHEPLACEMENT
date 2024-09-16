class Solution {
public:
    
//     SPACE OPTIMIZATION
    int s(int  m, int n) {
          vector<int>prev(n,0);
         for(int i=0;i<m;i++){
             vector<int>curr(n,0);
         for(int j=0;j<n;j++){
                 if(i==0 && j==0) curr[j]=1;
                 
                 else{
                  int up=0,left=0;
                  if (i>0) up=prev[j];
                  if (j>0) left=curr[j-1];
                 
                 curr[j]=up+left;
                 }
             }
             prev=curr;
         }
         return prev[n-1]; //0 based indexing
   
     }
    
    
//     TABULATION SOLUTION
  int tabulation(int  m, int n,vector<vector<int>>&dp) {
         for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
                 if(i==0 && j==0) dp[i][j]=1;
                 
                 else{
                  int up=0,left=0;
                  if (i>0) up=dp[i-1][j];
                  if (j>0) left=dp[i][j-1];
                 
                 dp[i][j]=up+left;
                 }
             }
         }
         return dp[m-1][n-1]; //0 based indexing
   
     }
    
    
//    RECURSIVE AND MEMORIZATION SOLUTION 
    int f(int  m, int n,vector<vector<int>>&dp) {
//      ulta recursion last se 0,0 tk
        if(m==0 && n==0) return 1;
        if(m<0 || n<0) return 0;
        if(dp[m][n] != -1) return dp[m][n];
        int up=f(m-1,n,dp);
        int left=f(m,n-1,dp);
        return  dp[m][n]=up+left;
    }
    
    
//    MAIN FUNCTION
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        // return f(m-1,n-1,dp);
         // return tabulation(m,n,dp);//to fill all cols
        return s(m,n);
    }
};