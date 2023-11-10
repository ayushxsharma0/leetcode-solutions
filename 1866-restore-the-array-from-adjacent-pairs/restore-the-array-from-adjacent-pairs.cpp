class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> mp ;

        for(auto it : adjacentPairs){
            mp[it[0]].push_back(it[1]) ;
            mp[it[1]].push_back(it[0]) ;
        }
        vector<int> ans ;
        for(auto i :mp){
            if(i.second.size() == 1){
                ans = {i.first,i.second[0]} ;                
                break ;
            }
        }
        while(ans.size() < adjacentPairs.size() + 1){
            int last = ans[ans.size()-1] ;
            int prev = ans[ans.size() -2] ;
            const vector<int>& candidates = mp[last] ;
            int nxt = (candidates[0] != prev) ? candidates[0] : candidates[1] ;
            ans.push_back(nxt) ;
        }
        return ans ;
    }
};