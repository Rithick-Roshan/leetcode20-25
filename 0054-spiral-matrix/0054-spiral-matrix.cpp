class Solution {
public:
    void spiral(vector<vector<int>>& m, vector<int>& rs, int i, int j, int r, int c, int dir) {
        if (r < 0 || r >= i || c < 0 || c >= j || m[r][c] == 101) {
            return;
        }
        
        
        rs.push_back(m[r][c]);
        m[r][c] = 101; 

       
        if (dir == 0) {
            if (c + 1 < j && m[r][c + 1] != 101) 
                spiral(m, rs, i, j, r, c + 1, 0);
            else 
                spiral(m, rs, i, j, r + 1, c, 1); 
        } 
        else if (dir == 1) { 
            if (r + 1 < i && m[r + 1][c] != 101) 
                spiral(m, rs, i, j, r + 1, c, 1);
            else 
                spiral(m, rs, i, j, r, c - 1, 2); 
        } 
        else if (dir == 2) { 
            if (c - 1 >= 0 && m[r][c - 1] != 101) 
                spiral(m, rs, i, j, r, c - 1, 2);
            else 
                spiral(m, rs, i, j, r - 1, c, 3); 
        } 
        else if (dir == 3) { 
            if (r - 1 >= 0 && m[r - 1][c] != 101) 
                spiral(m, rs, i, j, r - 1, c, 3);
            else 
                spiral(m, rs, i, j, r, c + 1, 0); 
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> rs;
        int i=m.size();
        int j=m[0].size();
        spiral(m,rs,i,j,0,0,0);
        return rs;
    }
};