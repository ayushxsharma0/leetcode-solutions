class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int l =0 ;
        int r = nums.size() -1 ;
        int ans =   INT_MIN ;
        while(r>l){
            int sum = nums[l] + nums[r] ;
            ans = max(ans,sum) ;
            r-- ;
            l++ ;
        }
        return ans ;
    }
};