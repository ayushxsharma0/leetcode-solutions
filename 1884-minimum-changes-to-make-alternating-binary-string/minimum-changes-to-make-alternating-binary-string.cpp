class Solution {
public:
    int minOperations(string s) {
        int ans =0 ;
        int res =0 ;
        int n = s.size() ;
        string t ;
        for(int i =0;i<n;i++){
            if(i %2==0){
                t += '0' ;
            }
            else{
                t+='1' ;
            }
        }
        for(int i =0;i<n;i++){
            if(s[i] != t[i]){
                res++ ;
            }
        }
        t.clear() ;
        for(int i =0;i<n;i++){
            if(i%2==0){
                t+='1' ;
            }
            else{
                t+='0' ;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i] != t[i]){
                ans++ ;
            }
        }
        return min(ans,res) ;
    }
};