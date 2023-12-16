class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false ;
        
        // nlogn time complexity solution
        // sort(s.begin(), s.end()) ;
        // sort(t.begin(),t.end()) ;

        // for(int i =0; i<s.size();i++){
        //     if(s[i] != t[i]) return false ;
        // }
        // return true ;

        // n time complexity
        unordered_map<char,int> mp ;
        for(auto i : s){
            mp[i] ++ ;
        }
        for(auto i : t){
            mp[i] -- ;
        }
        for(auto i : mp){
            if(i.second != 0) return false ;
        }
        return true ;
    }
};