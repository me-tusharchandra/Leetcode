class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == 1){
                    ans = dfs(grid, i, j);
                    break;
                }
            }
        }
        return ans;
    }

private:
    int dfs(vector<vector<int>>& grid, int r, int c){
        //Base Case:
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || grid[r][c] == 0){
            return 1;
        }

        if(grid[r][c] == -1){
            return 0;
        }

        grid[r][c] = -1;

        return (dfs(grid, r+1, c) + dfs(grid, r-1, c) + dfs (grid, r, c+1) + dfs(grid, r, c-1));
    }
};