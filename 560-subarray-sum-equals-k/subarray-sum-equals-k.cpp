class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //brute force get all subarrays
        // O(n3) approach and gives TLE
        // int count = 0;
        // int n = nums.size() ;
        // for(int i =0;i<n;i++){
        //     for(int j =i+1;j<=n;j++){
        //         int sum = 0 ;
        //         for(int k = i;k<j;k++){
        //             sum += nums[k] ;
        //         }
        //         if(sum == k){
        //             count++ ;
        //         }
        //     }
        // }
        // return count ;

        //using prefix sum array
        // int n = nums.size() ;
        // int count = 0; 
        // vector<int> arr(n+1) ;
        // arr[0] = 0 ;
        // for(int i = 1 ;i<=n;i++){
        //     arr[i] = arr[i-1] + nums[i -1] ;
        // }
        // //now calculate all subarrays

        // for(int i =0;i<n;i++){
        //     for(int j=i+1;j<=n;j++){
        //         int sum = arr[j] - arr[i] ;
        //         if(sum == k) count++ ;
        //     }
        // }
        // return count ;

        //most optimised approach
        //use a hashmap to store sum and number of times it appears

        int n = nums.size() ;
        unordered_map<int,int> mp ;
        mp[0] = 1 ;
        int count = 0;
        int sum = 0 ;
        for(int i=0 ;i< n;i++){
            sum += nums[i] ;
            //check if map contains sum -k
            if(mp[sum - k] != 0){
                count += mp[sum - k] ;
            } 
            mp[sum] ++ ;
        }
        return count ;
    }
};