// https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1

class Solution {
  public:
    // Function to find the number of islands.
    
    void bfs(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>&visi) {
        queue<pair<int,int>>q;
        q.push({i, j});
        visi[i][j] = true;
        int n = grid.size();
        int m = grid[0].size();
        while(!q.empty()) {
            int row  = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int deltaRow = -1; deltaRow<=1;deltaRow++) {
                for(int deltaCol = -1; deltaCol<=1;deltaCol++) {
                    int nrow = row+deltaRow;
                    int ncol = col+deltaCol;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && visi[nrow][ncol]==false) {
                        visi[nrow][ncol] = true;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<bool>>visi(row, vector<bool>(col, false));
        
        int ct = 0;
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                if(grid[i][j]=='0' || visi[i][j]==1)continue;
                ct++;
                bfs(grid, i, j, visi);
            }
        }
        return ct;
    }
};
