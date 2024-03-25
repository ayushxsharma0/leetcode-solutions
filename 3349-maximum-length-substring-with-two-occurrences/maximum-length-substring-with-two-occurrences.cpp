class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp ;
        int n = s.size() ;

        int i = 0 ;
        int j = 0 ; 
        int ans = -1 ;
        while(j<n){
            mp[s[j]] ++ ;
            while(mp[s[j]] == 3){
                mp[s[i]] -- ;
                i++ ;
            }
            ans = max(ans, j-i+1) ;
            j++ ;
        }
        return ans ;
    }
};