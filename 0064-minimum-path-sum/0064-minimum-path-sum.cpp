class Solution {
public:
    //     MEMEORIZATION
    int f(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {

        if (i == 0 && j == 0)
            return grid[0][0]; // last index
        if (i < 0 || j < 0)
            return INT_MAX; // max value dedo taaki usse aage jaye hi nhi
        if (dp[i][j] != -1)
            return dp[i][j];

        int up = f(i - 1, j, grid, dp);
        int left = f(i, j - 1, grid, dp);
        return dp[i][j] = grid[i][j] + min(left, up);
    }

    int minPathSum(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        // return f(m-1,n-1,grid,dp);

        //   SPACE OPTIMIZATION
        vector<int> prev(n, 0);
        for (int i = 0; i < m; i++) {
            vector<int> curr(n, 0);
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0)
                    curr[j] = grid[i][j];
                else {
                    int up = grid[i][j];
                    int left = grid[i][j];

                    if (i > 0)
                        up += prev[j];
                    else
                        up += 1e9;

                    if (j > 0)
                        left += curr[j - 1];
                    else
                        left += 1e9;

                    curr[j] = min(up, left);
                }
            }
            prev = curr;
        }
        return prev[n - 1];

        //         Tabulation
        //         for(int i=0;i<m;i++){
        //             for(int j=0;j<n;j++){
        //                 if(i==0 && j==0) dp[i][j]=grid[i][j];
        //                 else{
        //                     int up=grid[i][j];
        //                     int left=grid[i][j];

        //                     if(i>0) up+=dp[i-1][j];
        //                     else up+= 1e9;//handling base case of
        //                     memorization

        //                     if(j>0) left+=dp[i][j-1];
        //                     else left+=1e9;

        //                     dp[i][j]=min(up,left);

        //                 }

        //             }

        //         }
        //         return dp[m-1][n-1];
    }
};