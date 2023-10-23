class Solution {
public:
    bool isPowerOfTwo(int n) {
        // //using loops
        // if(n<=0) return 0 ;
        // while(n%2 ==0){
        //     n/=2 ;
        // }
        // return n==1 ;

        //using bit manipulation
        // for every power of 2 lets say n 
        // n and n-1 == 0 
        //this can be only observed by writing numbers in binary digits

        return (n>0 && ((n & (n-1)) == 0)) ;
    }
};