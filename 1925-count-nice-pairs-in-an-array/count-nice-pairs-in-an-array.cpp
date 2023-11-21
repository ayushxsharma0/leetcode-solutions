class Solution {
public:
    int mod = 1000000007 ;

    int rev(int n){
        int rem ; int ans =0;
        while(n){
            rem = n%10 ;
            ans = ans *10 + rem ;
            n /= 10 ;
        }
        return ans ;
    }
    int countNicePairs(vector<int>& nums) {
        for(int i =0; i<nums.size();i++){
            nums[i] = nums[i] - rev(nums[i]) ;
        }
        unordered_map<int,int> mp ;
        for(auto i : nums){
            mp[i] ++ ;
        }
        long long ans =0;
        for(auto it : mp){
            long long x = it.second ;
            x %= mod ;
            ans = (ans%mod +(x*(x-1))/2) %mod ;
        }
        return static_cast<int>(ans) ;
    }
};