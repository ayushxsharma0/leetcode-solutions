class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp ;
        
        for(auto i : nums){
            mp[i] ++ ;
        }
        int mx = INT_MIN ;
        for(auto it : mp){
            mx = max(mx,it.second) ;
        }        
        vector<vector<int>> ans(mx) ;
        int i =0 ;
        while(mx){
            for(auto it : mp){
                if(it.second>0){
                    ans[i].push_back(it.first) ;
                    mp[it.first] -- ;
                }
            }
            i++ ;
            mx-- ;
        }

        return ans ;
    }
};