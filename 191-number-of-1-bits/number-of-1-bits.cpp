class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0 ;
        //brian kermingham algorithm
        while(n){
            n= n&(n-1) ;
            count++ ;
        }
        return count ;
    }
};