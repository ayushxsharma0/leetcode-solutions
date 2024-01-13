class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0 ; int j=0 ;
        unordered_set<char> mp ;
        int ans = 0 ;
        while(j<s.size()){
            if(mp.find(s[j]) == mp.end()){
                mp.insert(s[j]) ;
                j++ ;
                ans = max(ans,j-i) ;
            }
            else{
                mp.erase(s[i]) ;
                i++ ;
            }
        }
        return ans ;
    }
};