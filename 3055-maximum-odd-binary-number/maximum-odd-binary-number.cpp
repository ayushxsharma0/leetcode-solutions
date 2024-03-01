class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size() ;
        int z =0 ; int o = 0 ;
        for(auto i : s){
            if(i == '0'){
                z++ ;
            }
            else{
                o++ ;
            }
        }
        string ans = "" ;
        while(o > 1){
            ans += '1' ;
            o-- ;
        }
        while(z){
            ans += '0' ;
            z-- ;
        }
        ans += '1' ;
        return ans ;
    }
};