class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int rows = grid.size() ;
        int cols = grid[0].size() ;

        vector<int> r1(rows,0) ;
        vector<int> c1(cols,0) ;

        for(int i = 0; i<rows;i++){
            for(int j = 0; j<cols;j++){
                r1[i] += grid[i][j] ;
                c1[j] += grid[i][j] ;
            }
        }

        for(int i=0;i<rows;i++){
            for(int j = 0; j<cols;j++){
                grid[i][j] = 2*(r1[i] + c1[j]) - rows - cols ;
            }
        }
        return grid  ;
    }
};