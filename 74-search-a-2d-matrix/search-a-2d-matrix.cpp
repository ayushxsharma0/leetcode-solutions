class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low =0 ;
        int high = matrix.size()-1 ;

        while(high > low){
            int mid = low + (high - low)/2 ;

            if(matrix[mid][0] == target){
                return true ;
            }

            if(matrix[mid][0] < target && matrix[mid+1][0] > target){
                low = mid ;
                break ;
            }
            if(matrix[mid][0] < target){
                low = mid +1 ;
            }
            else{
                high = mid -1;
            }
        }
        int lowcol = 0;
        int highcol = matrix[0].size() -1 ;

        while(lowcol <= highcol){
            int mid = lowcol + (highcol-lowcol)/2 ;

            if(matrix[low][mid] == target) return true ;

            if(matrix[low][mid] < target){
                lowcol = mid+1 ;
            }
            else{
                highcol = mid-1 ;
            }
        }
        return false ;
    }
};