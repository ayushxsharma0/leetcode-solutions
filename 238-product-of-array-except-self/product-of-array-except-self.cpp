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
        vector<int> suff(n) ;
        vector<int> pref(n) ;
        suff[n-1] = 1 ;
        pref[0] = 1 ;

        for(int i =1; i<n;i++){
            pref[i] = pref[i-1] * nums[i-1] ;
        }
        for(int i =n-2;i>=0;i--){
            suff[i] = suff[i+1] * nums[i+1] ;
        }
        for(int i =0;i<n;i++){
            nums[i] = suff[i] * pref[i] ;
        }
        return nums ;
    }
};