class Solution {
public:
    int search(vector<int>& nums, int target) {
        // O(n) approach !
        // int ans = -1 ;
        // for(int i =0 ; i<nums.size();i++){
        //     if(nums[i] == target){
        //         ans = i ;
        //         break ;
        //     }
        // }
        // return ans ;

        int n = nums.size() ;
        int s = 0 ; int e = n-1 ;
        
        while(e >= s){
            int mid = s + (e-s)/2 ;

            if(target == nums[mid]) return mid ;

            if(nums[mid] >= nums[s]){
                if(target < nums[s] || target > nums[mid]){
                    s = mid+1;
                }
                else{
                    e = mid-1 ;
                }
            }
            else{
                if(target < nums[mid] || target > nums[e]){
                    e = mid-1;
                }
                else{
                    s = mid+1 ;
                }
            }
        }
        return -1 ;
    }
};