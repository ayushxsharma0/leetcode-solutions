class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp ;
        int n = s.size() ;

        for(auto i : s){
            mp[i]++ ;
        }
        int ans = -1 ;
        for(int i =0; i< n;i++){
            if(mp[s[i]] == 1){
                ans = i ;
                break ;
            }
        }
        return ans ;
    }
};