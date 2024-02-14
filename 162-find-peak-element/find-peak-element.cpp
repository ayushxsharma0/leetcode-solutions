class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //linear time solution
        // int n = nums.size() ;
        // if(n == 2){
        //     if(nums[0] > nums[1]){
        //         return 0 ;
        //     }
        //     else{
        //         return 1 ;
        //     }
        // }
        // for(int i =1;i<n-1;i++){
        //     if(i+1 == n-1 && nums[i+1] > nums[i]){
        //         return i+1 ;
        //     }
        //     if(i-1 == 0 && nums[i-1]>nums[i]){
        //         return i-1 ;
        //     }
        //     if(nums[i] > nums[i+1] && nums[i] > nums[i-1]){
        //         return i ;
        //     }
        // }
        // return 0 ;

        //the main task is to solve it in O(log n) time complexity
        int n = nums.size()  ;
        int s = 1; 
        int e = n-2 ;
        //edge cases 
        if(n==1) return 0 ;
        if(nums[0] > nums[1]) return 0 ;
        if(nums[n-1] > nums[n-2]) return n -1 ;
        //
        while(e>=s){
            int mid = s + (e-s)/2 ;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid ;
            }
            else if(nums[mid] > nums[mid-1]){
                s = mid+1 ;
            }
            else{
                e = mid-1 ;
            }
        }
        return -1 ;
    }
};