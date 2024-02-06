class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp ;
        string x = "";
        vector<vector<string>> v ;
        for(auto i : strs){
            x = i ;
            sort(x.begin(),x.end()) ;
            mp[x].push_back(i) ;
        }
        for(auto i : mp){
            v.push_back(i.second) ;
        }
        return v ;
    }
};