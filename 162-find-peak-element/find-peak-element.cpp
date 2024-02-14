class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //linear time solution
        int n = nums.size() ;
        if(n == 2){
            if(nums[0] > nums[1]){
                return 0 ;
            }
            else{
                return 1 ;
            }
        }
        for(int i =1;i<n-1;i++){
            if(i+1 == n-1 && nums[i+1] > nums[i]){
                return i+1 ;
            }
            if(i-1 == 0 && nums[i-1]>nums[i]){
                return i-1 ;
            }
            if(nums[i] > nums[i+1] && nums[i] > nums[i-1]){
                return i ;
            }
        }
        return 0 ;
    }
};