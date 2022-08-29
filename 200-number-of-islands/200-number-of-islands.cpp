class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count=0;
        for(int row=0; row<m; row++) {
            for(int col=0; col<n; col++) {
                if(grid[row][col] == '1') {
                    count++;
                    recurs(grid, row, col);
                }    
            }
        }
        return count;
    }
    
    void recurs(vector<vector<char>>& grid, int m, int n) {
        if(0<=m && 0<=n && m < grid.size() && n < grid[m].size() && grid[m][n] == '1' ) {
            grid[m][n] = '-';
            recurs(grid, m+1, n);
            recurs(grid, m-1, n);
            recurs(grid, m, n+1);
            recurs(grid, m, n-1);    
        }
    }
};