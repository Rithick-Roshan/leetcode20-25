
int dfs(int ** grid ,int i,int j,int r ,int c,int rs){
    if(i<0 || j<0 || i>=r || j>=c || grid[i][j]==0){
        return rs;
    } 

    grid[i][j]=0;
    rs++;
    printf("%d --\n",rs);
    rs=dfs(grid,i+1,j,r,c,rs);
    rs=dfs(grid,i-1,j,r,c,rs);
    rs=dfs(grid,i,j+1,r,c,rs);
    rs=dfs(grid,i,j-1,r,c,rs);
    return rs;

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
                int rs=dfs(grid,i,j,r,c,0);
                max=fmax(rs,max);
            }
        }
        
    }
    return max;
}