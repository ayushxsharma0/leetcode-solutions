class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size() ;
        int n = mat[0].size() ;
        int s = 0 ; 
        int e = n-1 ;
        int left , right ;

        while(e>=s){
            int mid = (s + e)/2 ;
            int idx  = findMax(mat,m,mid) ;
            int ele = mat[idx][mid] ;

            if(mid-1 >= 0){
                left = mat[idx][mid-1] ;
            }else{
                left = -1 ;
            }
            if(mid+1 < n){
                right = mat[idx][mid+1] ;
            }else{
                right = -1 ;
            }  

            if(ele > left && ele > right){
                return {idx,mid} ;
            }
            else if(ele > left){
                s = mid+1 ;
            }
            else{
                e = mid-1 ;
            }
        }
        return {-1,-1} ;
    }

    int findMax(vector<vector<int>> mat,int r, int c){
        int ele = -1 ;
        int idx = -1 ;

        for(int i =0; i<r;i++){
            if(mat[i][c] > ele){
                ele = mat[i][c] ;
                idx = i ;
            }
        }
        return idx ;
    }
};