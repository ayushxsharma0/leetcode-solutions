class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1 ;
        vector<int> psum(n,0) ;
        vector<int> ssum(n+1,0) ;

        psum[0] = 0 ;
        ssum[n] = n ;

        for(int i =1;i<n;i++){
            psum[i] =i+psum[i-1] ;
        }
        for(int j = n-1;j>=0;j--){
            ssum[j] = j + ssum[j+1] ;
        }

        for(int i = 1;i<n;i++){
            if(psum[i] == ssum[i]){
                return i ;
            }
        }
        return -1 ;
    }
};