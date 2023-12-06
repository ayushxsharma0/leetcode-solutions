class Solution {
public:
    int totalMoney(int n) {
        int x =1 ;
        int ans = 0 ;
        int days = 1 ;
        int week = 1 ;
        while(n--){
            ans += x ;
            x++ ;
            
            if(days%7 == 0){
                week+=1 ;
                x = week ;
            }
            days++ ;
        }
        return ans ;
    }
};