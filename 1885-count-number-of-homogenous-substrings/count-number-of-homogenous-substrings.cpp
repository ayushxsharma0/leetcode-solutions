class Solution {
public:
    int countHomogenous(string s) {
        int left = 0 ;
        long long ans =0 ; 

        for(int i =0;i<s.length();i++){
            if(s[left] == s[i]){
                ans += i - left +1 ;
            }
            else{
                ans +=1 ;
                left = i ;
            }
        }
        return (int) (ans % 1000000007) ;
    }
};