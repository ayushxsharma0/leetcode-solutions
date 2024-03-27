class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans ;
        int n = nums.size() ;
        vector<bool> freq(n,0) ;
        vector<int> vec ;

        helper(ans,vec,freq,nums) ;
        
        return ans ;
    }

    void helper(vector<vector<int>> &ans, vector<int> &vec, vector<bool> &freq, vector<int> nums){
        if(vec.size() == nums.size()){
            ans.push_back(vec) ;
        }

        for(int i = 0;i<nums.size();i++){
            if(!freq[i]){
                vec.push_back(nums[i]) ;
                freq[i] = 1 ;
                helper(ans,vec,freq,nums) ;
                freq[i] = 0 ;
                vec.pop_back() ;
            }
        }
    }
};