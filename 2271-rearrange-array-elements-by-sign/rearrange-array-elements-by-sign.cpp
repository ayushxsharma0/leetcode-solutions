class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> ans(n,0) ;
        int pidx =0 ; int nidx = 1 ;
        for(int i =0;i<n;i++){
            if(nums[i] > 0){
                ans[pidx] = nums[i] ;
                pidx += 2 ;
            }
            else{
                ans[nidx] = nums[i] ;
                nidx += 2 ;
            }
        }
        return ans ;
    }
};