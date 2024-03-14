class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //using prefix
        int n = nums.size() ;
        int psum = 0 ;
        unordered_map<int,int> mp ;
        int ans = 0 ;
        mp[0] = 1 ;
        for(int i = 0;i<n;i++){
            psum += nums[i] ;
            
            if(mp[psum - goal] != 0){
                ans += mp[psum-goal] ;
            }
            mp[psum]++ ;
        }
        return ans ;
    }
};