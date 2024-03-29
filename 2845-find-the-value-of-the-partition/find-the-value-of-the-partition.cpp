class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int n = nums.size() ;
        sort(nums.begin(), nums.end()) ;
        int val = INT_MAX ;
        for(int i =0;i<n-1;i++){
            
            int diff = abs(nums[i+1] - nums[i]) ;
            val = min(diff,val) ;
        }
        return val ;
    }
};