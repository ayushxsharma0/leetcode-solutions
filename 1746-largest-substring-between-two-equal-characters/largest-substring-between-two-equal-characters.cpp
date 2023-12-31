class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        //O(n2) approach
        // int ans = -1 ;
        // for(int i=0;i<s.size();i++){
        //     for(int j =i+1;j<s.size();j++){
        //         if(s[i] == s[j]){
        //             ans = max(ans, j-i-1) ;
        //         }
        //     }
        // }
        // return ans ;
        int n = s.size() ;
        int ans = -1 ;
        unordered_map<char,vector<int>> mp ;

        for(int i =0; i<n;i++){
            mp[s[i]].push_back(i) ;
        }

        for(auto i : mp){
            int sz = i.second.size() ;
            if(sz >=2){
                ans = max(ans, i.second[sz-1] - i.second[0] -1 ) ;
            }
        }
        return ans ;
    }
};