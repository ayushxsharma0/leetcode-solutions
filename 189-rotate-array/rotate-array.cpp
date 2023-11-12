class Solution {
public:
    void reverse(int l, int h, vector<int>&arr){
        while(h>l){
            swap(arr[l++],arr[h--]) ;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size() ;
        k=k% n ;
        reverse(0,n-1,nums) ;
        reverse(0,k-1,nums) ;
        reverse(k,n-1,nums) ;
    } 
};