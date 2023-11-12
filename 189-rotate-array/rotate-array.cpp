class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //create a new array and put totated array in it
        vector<int> v(nums.size(),0) ;
        for(int i =0;i<nums.size();i++){
            v[(i+k)%nums.size()] = nums[i] ;
        }
        nums = v ;
    }

    // // reverse the array in particular order
    // reverse(0,n-1,arr) ;
    // reverse(0,k-1,arr) ;
    // reverse(k,n-1,arr) ;
    // where reverse is the function to reverse the array
};