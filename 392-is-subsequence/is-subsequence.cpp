class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() > t.size()) return false ;
        int n = s.size() ;
        int i = 0 ;

        for(int j =0;j<t.size();j++){
            if(i<n && s[i] == t[j]){
                i++ ;
            }
        }
        return i==n ;
    }
};