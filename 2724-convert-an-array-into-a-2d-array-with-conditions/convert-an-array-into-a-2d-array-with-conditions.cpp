class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(nums.size() + 1);
        
        vector<vector<int>> ans;
        for(auto i : nums){
            if(freq[i] >= ans.size()){
                ans.push_back({}) ;
            }

            ans[freq[i]].push_back(i) ;
            freq[i] ++ ;
        }
        
        return ans;
    }
};