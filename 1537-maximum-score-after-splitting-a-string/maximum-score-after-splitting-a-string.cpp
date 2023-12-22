class Solution {
public:
    int maxScore(string s) {
        int ans = 0 ;
        int zeroes = 0;
        int ones = 0 ;
        for(int i =0;i<s.size()-1;i++){
            int f=0 ; int e = i+1 ;
            zeroes = 0; ones = 0 ;
            while(f<=i){
                if(s[f] == '0'){
                    zeroes++ ;
                }
                f++ ;
            }
            while(e<s.size()){
                if(s[e] =='1'){
                    ones++ ;
                }
                e++ ;
            }
            int sum = zeroes+ones ;
            ans = max(sum,ans) ;
        }
        return ans ;
    }
};