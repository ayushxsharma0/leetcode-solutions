class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        //prefix product approach
        
        // int n = nums.size() ;
        // vector<long long> arr(n+1) ;
        // arr[0] = 1 ;
        // for(int i=1;i<=n;i++){
        //     arr[i] = arr[i-1] * nums[i-1] ;
        // }
        // int count = 0 ;
        // //calculate for all subarrays possible
        // for(int s=0;s<n;s++){
        //     for(int e=s+1;e<=n;e++){
        //         int prod = 1 ;
        //         prod = arr[e] / arr[s] ;
        //         if(prod < k){
        //             count++ ;
        //         }
        //     }
        // }
        // return count ;

        //can't pass all test cases !!
        //so now using sliding window

        int n = nums.size() ;
        int prod = 1 ;
        int count =0 ;
        int j =0; int i =0 ;

        if(k <=1) return 0 ;
        while(j<n){
            prod *= nums[j] ;
            while(prod >=k){
                prod /= nums[i++] ;
            }
            count += j - i +1; 
            j++ ;
        }
        return count ;
    }
};