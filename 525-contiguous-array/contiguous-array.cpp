class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //no two pointers cuz we haven't given any threshold condition

        //if sum of two subarrays is equal then they have same numbers of ones
        //if sum[n] == n - sum[n] then both number of zeroes and ones are equal

        int n = nums.size() ;
        //when u encounter a 1 add 1 in prefix if u encounter a 0 substract 1
        int count = 0 ; int ans = 0 ;
        unordered_map<int,int> mp ;
        mp[0] = -1 ;
        for(int i = 0 ;i<n;i++){
            count += (nums[i]== 1 ? 1 : -1) ;
            //whenever count becomes 0 that means the whole array from begining has equal number of 1s and 0s
            if(mp.find(count) != mp.end()){
                ans = max(ans, i-mp[count]) ;
            }
            else{
                mp[count] = i ;
            }
        }
        return ans ;
    }
};