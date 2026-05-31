class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j){
        if (i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return 1;
        }
        if (grid[i][j]==0){
            return 1;
        }
        if (grid[i][j]==-1){
            return 0;
        }
        //left
        grid[i][j] = -1;
        int left = dfs(grid,i,j-1);
        //right
        int right =  dfs(grid,i,j+1);
        //up
        int up =  dfs(grid,i-1,j);
        // down
        int down = dfs(grid,i+1,j);

        return left+right+up+down;


    }
    int islandPerimeter(vector<vector<int>>& grid) {
        for (int i = 0;i<grid.size();i++){
            for (int j = 0;j<grid[i].size();j++){
                if (grid[i][j]==1){
                    return  dfs(grid,i,j);
                }
            }
        }
        return 0;
    }
};