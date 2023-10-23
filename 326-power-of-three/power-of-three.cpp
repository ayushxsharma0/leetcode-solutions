class Solution {
public:
    bool isPowerOfThree(int n) {
        // //using loop 
        // if(n<=0) return 0 ;
        // while(n>1){
        //     n/=3 ;
        // }
        // return n==1 ;

        // using bit manipulation
        //Now, when we add previous power of three (in bit represenation) to Left shift of previous power of three ((in bit represenation)) we get new power of three.

        long temp =1 ;
        while(n>1 && temp <n){
            temp += temp<<1 ;
        }
        return temp == n ;

    }
};