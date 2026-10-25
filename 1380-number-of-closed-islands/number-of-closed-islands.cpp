class Solution {
public:
    int n,m;
    void dfs(vector<vector<int>>&grid,int i,int j){
        if(i<0||i>=n||j<0||j>=m||grid[i][j]==1){
            return;
        }
        grid[i][j]=1;
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
    }
    int closedIsland(vector<vector<int>>& grid) {
         n=grid.size();
         m=grid[0].size();
        //traverse on boundry 0s and make them and attached 0s=1 
        for(int row=0;row<n;row++){
            if(grid[row][0]==0){
                dfs(grid,row,0);
            }
            if(grid[row][m-1]==0){
                dfs(grid,row,m-1);
            }
        }
        for(int col=0;col<m;col++){
            if(grid[0][col]==0){
                dfs(grid,0,col);
            }
            if(grid[n-1][col]==0){
                dfs(grid,n-1,col);
            }
        }
        //now to count no. of islands , again do dfs on connected 0s
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;

    }
};