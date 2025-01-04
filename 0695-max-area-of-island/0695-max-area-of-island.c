
void dfs(int ** grid ,int i,int j,int r ,int c,int* ans){
    if(i<0 || j<0 || i>=r || j>=c || grid[i][j]==0){
        return;
    } 

    grid[i][j]=0;
    (*ans)++;
    // printf("%d\n",rs);
    dfs(grid,i+1,j,r,c,ans);
    dfs(grid,i-1,j,r,c,ans);
    dfs(grid,i,j+1,r,c,ans);
    dfs(grid,i,j-1,r,c,ans);

}
int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize) {
    int r=gridSize;
    int c=*gridColSize;
    int max=0;
    int count=0;
    for(int i=0;i<r;i++){
        // count=0;
        for(int j=0;j<c;j++){
            if(grid[i][j]==1){
                dfs(grid,i,j,r,c,&count);
                max=fmax(count,max);
                count=0;
            }

        }
        
    }
    return max;
}