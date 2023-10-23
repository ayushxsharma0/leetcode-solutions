class Solution {
public:
    bool isPowerOfFour(int n) {
        float x = n ;
        while(x>1){
            x /= 4 ;
        }
        return x==1 ;
    }
};