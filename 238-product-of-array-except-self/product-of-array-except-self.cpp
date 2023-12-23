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
        vector<int> output(n) ;
        output[0] = 1 ;
        for(int i=1;i<n;i++){
            output[i] = output[i-1] * nums[i-1] ; //prefix array
        }
        int prod = nums[n-1] ;
        for(int i = n-2;i>=0;i--){
            output[i] *= prod ;
            prod *= nums[i] ;
        }
        return output ;
    }
};