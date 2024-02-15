class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size() ;

        sort(nums.begin(),nums.end()) ;
        // if(n==3){
        //     if(nums[2] > nums[0] + nums[1]){
        //         return nums[0]+nums[1]+nums[2] ;
        //     }
        //     else{
        //         return -1 ;
        //     }
        // }
        vector<long long> prefix(n,0) ;
        for(int i =1 ;i<n;i++){
            prefix[i] = prefix[i-1] + nums[i-1] ;
        }
        long long ans = -1;
        for(int i = n-1; i>=0;i--){
            if(nums[i] < prefix[i] && i>=2){
                ans = nums[i] + prefix[i] ;
                break ;
            }
            
        }
        return ans ;
    }
};