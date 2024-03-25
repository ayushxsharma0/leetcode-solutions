class Solution {
public:
    int minOperations(int k) {
        int ans = INT_MAX ;

        for(int i =1;i<=k;i++){
            int op2 = ceil(k/(1.0*i)) ;
            int times = op2 + (i-2) ;

            ans = min(ans, times) ;
        }
        return ans ;
    }
};