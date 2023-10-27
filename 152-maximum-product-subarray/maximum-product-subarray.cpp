class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN ; int prod = 1;

        for(auto i : nums){
            prod *= i ;
            if(ans < prod){
                ans = prod ;
            }
            if(prod ==0){
                prod = 1 ;
            }
        }
        prod = 1 ;
        for(int i = nums.size()-1;i>=0;i--){
            prod  *= nums[i] ;
            ans = max(prod,ans) ;
            if(prod ==0){
                prod = 1 ;
            }
        }

        return ans ;
    }
};