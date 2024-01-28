class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;

        //create the prefix of each row
        for(int i =0;i<rows;i++){
            for(int j=1;j<cols;j++){
                matrix[i][j] += matrix[i][j-1] ;
            }
        }
        //now each row is in prefix sum format

        int count = 0;
        

        //traverse between every two column possible

        for(int cstart=0;cstart<cols;cstart++){
            for(int cend= cstart;cend<cols;cend++){
                int sum = 0 ;
                unordered_map<int,int> mp ;
                mp[0] =1 ;
                for(int r = 0;r<rows;r++){
                    sum += matrix[r][cend] - (cstart==0 ?0: matrix[r][cstart-1]) ;
                    count += mp.count(sum-target) ? mp[sum-target] : 0 ;
                    mp[sum] ++ ;
                }
            }
        }
        return count ;
    }
};