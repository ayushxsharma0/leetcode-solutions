class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        //create an array of prefix sum
        
        // int n = nums.size() ;
        // vector<int> arr(n+1) ;
        // arr[0] = 0 ;
        // for(int i=1;i<=n;i++){
        //     arr[i] = arr[i-1] + nums[i-1] ;
        // }
        // //generate all subarrays 
        // int count = 0 ;
        // for(int s=0;s<n;s++){
        //     for(int e = s+1;e<=n;e++){
        //         int sum = arr[e] - arr[s] ;

        //         if(sum % k == 0){
        //             count++ ;
        //         }
        //     }
        // }
        // return count ;

        //gives TLE 
        int n = nums.size() ;
        int count = 0 ;
        //(prefix[j] - prefix[i]) % k = 0 
        //prefix[j] %k = prefix[i]%k
        vector<int> mp(k,0) ;
        mp[0] = 1 ;
        int sum = 0 ;
        for(int i=0;i<n;i++){
            sum = (sum + nums[i]%k + k) ;
            int rem = sum %k ;
            count += mp[rem] ;
            mp[rem]++ ;
        }
        return count ;
    }
};