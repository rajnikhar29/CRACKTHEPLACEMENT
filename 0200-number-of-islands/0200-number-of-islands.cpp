// class Solution {
// public:

// void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>& grid){
//     vis[row][col]=1;
//     queue<pair<int,int>>q;
//     q.push({row,col});
//     int n=grid.size();
//     int m=grid[0].size();

//     while(!q.empty()){
//         int row=q.front().first;
//         int col=q.front().second;
//         q.pop();

//         for(int delrow=-1;delrow<=1;delrow++){
//             for(int delcol=-1;delcol<=1;delcol++){
//                 int nrow=row+delrow;
//                 int ncol=col+delcol;
//                 if(nrow >=0 && nrow<n && ncol >=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
//                     vis[nrow][ncol]=1;
//                     q.push({nrow,ncol});

//                 }
//             }
//         }
//     }
// }
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();

//         vector<vector<int>>vis(n,vector<int>(m,0));
//         int cnt=0;

//         for(int row=0;row<n;row++){
//             for(int col=0;col<m;col++){
//                 if(!vis[row][col] && grid[row][col]=='1'){
//                     cnt++;
//                     bfs(row,col,vis,grid);
//                 }
//             }
//         }
//         return cnt;
//     }
// };

class Solution {
public:
    // Function to perform BFS and mark the connected component
    void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid) {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});
        int n = grid.size();
        int m = grid[0].size();

        // Define 4 possible directions (up, down, left, right)
        vector<int> directions = {-1, 0, 1, 0}; // for rows
        vector<int> directionsCol = {0, 1, 0, -1}; // for columns

        while (!q.empty()) {
            int curRow = q.front().first;
            int curCol = q.front().second;
            q.pop();

            // Explore all 4 possible directions
            for (int i = 0; i < 4; ++i) {
                int newRow = curRow + directions[i];
                int newCol = curCol + directionsCol[i];

                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && grid[newRow][newCol] == '1' && !vis[newRow][newCol]) {
                    vis[newRow][newCol] = 1;
                    q.push({newRow, newCol});
                }
            }
        }
    }

    // Function to count the number of islands
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;

        // Traverse each cell in the grid
        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < m; ++col) {
                // If the cell is land and not visited
                if (!vis[row][col] && grid[row][col] == '1') {
                    ++cnt; // Increment the island count
                    bfs(row, col, vis, grid); // Perform BFS to mark the whole island
                }
            }
        }
        return cnt;
    }
};
