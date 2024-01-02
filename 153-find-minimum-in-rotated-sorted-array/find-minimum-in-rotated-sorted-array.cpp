class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0 ; int res = nums[0] ; 
        int e = nums.size() -1 ;

        while(e >= s){
            if(nums[e] > nums[s]){
                res = min(res,nums[s]) ;
                break ;
            }
            int mid = s + (e-s)/2 ;
            res = min(res,nums[mid]) ;
            if(nums[s] <= nums[mid]){
                s = mid +1 ;
            }
            else{
                e = mid -1 ;
            }
        }
        return res ;
    }
};