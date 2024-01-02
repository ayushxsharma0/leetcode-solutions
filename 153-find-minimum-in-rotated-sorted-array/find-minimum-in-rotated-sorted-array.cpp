class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size() ;
        int s =0 ; int e = n-1 ;
        int res = INT_MAX ;

        while(e >= s){
            //we get a sorted array
            if(nums[e] > nums[s]){
                res = min(res,nums[s]) ;
                break ;
            }
            int mid = s + (e-s)/2 ;
            res = min(res,nums[mid]) ;

            if(nums[s] <= nums[mid]){
                s = mid+1 ;
            }
            else{
                e = mid-1 ;
            }
        }
        return res ;
    }
};