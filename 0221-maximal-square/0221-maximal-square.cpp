class Solution {
public:
    int solve(int i , int j ,vector<vector<char>>& matrix,int n, int m,int& maxi, vector<vector<int>>&dp){
        if(i>=n || j>=m ) return 0;

        int right     = solve(i,j+1,matrix, n, m,maxi,dp);
        int down      = solve(i+1,j,matrix,n,m,maxi,dp);
        int diagnoal  = solve(i+1,j+1,matrix,n,m,maxi,dp);
        int curr =0;
        if(matrix[i][j]=='1'){
             curr = 1 + min(right , min(down, diagnoal));//legit square h ya nhi
             maxi = max(maxi ,curr);
            return dp[i][j] =curr;
        }else{

            return dp[i][j]=0;
        }
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        // int maxi = 0;
        //  solve(0,0,matrix,n,m,maxi,dp);
        //  return maxi * maxi;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int maxi=0;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
        int right     = dp[i][j+1];
        int down      = dp[i+1][j];
        int diagnoal  = dp[i+1][j+1];
        int curr =0;
        if(matrix[i][j]=='1'){
             curr = 1 + min(right , min(down, diagnoal));//legit square h ya nhi
             maxi = max(maxi ,curr);
             dp[i][j] =curr;
            }
            else dp[i][j]=0;
            }

        }
        return maxi*maxi;
    }
};