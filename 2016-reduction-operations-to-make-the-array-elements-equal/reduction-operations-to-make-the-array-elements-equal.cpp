class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ans = 0 ;
        int count = 0 ;
        sort(nums.begin(), nums.end()) ;
        int curr = nums[0];
        for(int i =0; i<nums.size();i++){
            if(curr != nums[i]){
                count+=1 ;
                curr = nums[i] ;
            }
            ans += count ;
        }
        return ans ;
    }
};