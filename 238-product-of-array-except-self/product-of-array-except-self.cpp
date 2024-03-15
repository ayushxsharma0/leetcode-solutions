class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // o(n2) solution and gives TLE !! 
        // int n = nums.size() ;
        // vector<int> ans(nums.size(),0) ;
        // int s,e ;
        // for(int i =0; i<nums.size();i++){
        //     s=0 ; e =n-1 ;
        //     int prod =1 ;
        //     while(s<i){
        //         prod *= nums[s] ;
        //         s++ ;
        //     }
        //     while(e>i){
        //         prod *= nums[e] ;
        //         e-- ;
        //     }
        //     ans[i] = prod ;
        // }
        // return ans ;
        int n = nums.size() ;
        vector<int> prefix(n,1) ;
        vector<int> suffix(n,1) ;
        prefix[0] = 1 ;
        suffix[n-1] = 1 ;

        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] * nums[i-1] ;
        }
        for(int i = n-2;i>=0;i--){
            suffix[i] = suffix[i+1]*nums[i+1] ;
        }
        vector<int> ans(n) ;
        for(int i = 0;i<n;i++){
            ans[i] = prefix[i] * suffix[i] ;
        }
        return ans ;
    }
};