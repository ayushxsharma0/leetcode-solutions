class Solution {
public:
    int climbStairs(int n) {
        //it follows fibonacci pattern
        // 1 = 1 way 
        // 2 - 2 ways (1+1) (2)

        // for k 
        // reach (k-1) +1 or reach(k-2) +2
        int a=0 ; int b =1 ;
        int c=0 ;
        for(int i=0;i<n;i++){
            c = a+b ;
            a=b ;
            b=c ;
        }
        return b ;
    }
};