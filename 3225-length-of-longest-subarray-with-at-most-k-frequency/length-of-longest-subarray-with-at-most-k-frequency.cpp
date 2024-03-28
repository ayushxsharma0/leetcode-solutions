class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i =0; int j = 0;
        int n = nums.size() ;
        unordered_map<int,int> mp ;
        int ans = 1 ;
        
        while(j<n){
            mp[nums[j]]++ ;

            if(mp[nums[j]] > k){
                while(mp[nums[j]] > k && j>=i){
                    mp[nums[i]]-- ;
                    i++ ;
                }
            }
            ans = max(j-i+1,ans) ;
            j++ ;
        }
        return ans ;
    }
};