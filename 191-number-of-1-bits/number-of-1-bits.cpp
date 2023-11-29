class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0 ;
        //brian kermingham algorithm
        //when we substract 1 from binary reresent of a number it reverses all vits after rightmost set bit
        while(n){
            n= n&(n-1) ;
            count++ ;
        }
        return count ;
    }
};