class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp ;
        for(auto i : s){
            mp[i]++ ;
        }
        string res = "" ;
        for(auto i : order){
            while(mp[i]-- > 0){
                res += i ;
            }
        }
        for(auto &it : mp){
            while(it.second-- >0){
                res += it.first ;
            }
        }
        return res ;
    }
};