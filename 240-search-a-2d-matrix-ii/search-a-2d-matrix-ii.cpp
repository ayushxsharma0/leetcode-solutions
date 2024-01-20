class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size() ;
        int cols = matrix[0].size()  ;

        for(int i=0;i<rows;i++){
            for(int j =0;j<cols;j++){
                if(matrix[i][j] == target) return true ;

                if(matrix[i][j] > target){
                    continue ;
                }
            }
        }
        return false ;
    }
};