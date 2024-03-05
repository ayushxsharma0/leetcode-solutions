class Solution {
public:
    int minimumLength(string s) {
        int i =0 ; int j = s.size() -1 ;
        while(j>i){
            if(s[i]== s[j]){
                while(s[i+1] == s[i] && i+1<j){
                    i++ ;
                }
                while(s[j-1] == s[j] && j-1>i){
                    j-- ;
                }
                i++ ; j-- ;
            }
            else{
                break ;
            }
        }
        return j-i+1 ;
    }
};