class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){
            return n ;
        }
        unordered_map<int,int> mp ;
        set<int> s ;
        for(auto i : trust ){
            mp[i[1]]++ ;
            s.insert(i[0]) ;
        }

        for(auto i : mp){
            if(i.second == n-1 && s.find(i.first) == s.end()){
                return i.first ;
            }
        }
        return -1 ;
    }
};