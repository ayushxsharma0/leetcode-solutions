class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1} ;

        int i =0; int j =nums.size()-1 ;
        for(;j>=0;j--){
            if(nums[j] == target){
                ans[1] = j ;
                break ;
            }
        }
        for(;i<nums.size();i++){
            if(nums[i] == target){
                ans[0] = i ;
                break ;
            }

        }
        return ans ;
    }
};