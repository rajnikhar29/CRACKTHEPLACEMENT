class Solution {
public:
int f(vector<vector<int>>& board,int m,int n,int i,int j){
    int countOnes=0;

    if(i-1>=0 && j-1>=0) if(board[i-1][j-1]==1) countOnes++;
    if(i-1>=0 && j+1<n) if(board[i-1][j+1]==1) countOnes++;
    if(j-1 >=0) if(board[i][j-1]==1) countOnes++;
    if(i-1 >=0) if(board[i-1][j]==1) countOnes++;
    if(j+1<n) if(board[i][j+1]==1) countOnes++;
    if(i+1<m) if(board[i+1][j]==1) countOnes++;
    if(i+1<m && j+1<n) if(board[i+1][j+1]==1) countOnes++;
    if(i+1<m && j-1>=0) if(board[i+1][j-1]==1) countOnes++;
    return countOnes;

}
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();

        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt=f(board,m,n,i,j);
                if(board[i][j]==0) {
                    if(cnt==3) dp[i][j]=1;
                }
                else {
                    if(cnt==2||cnt==3) dp[i][j]=1;
                }
            }
        }
        board=dp;

        
    }
};