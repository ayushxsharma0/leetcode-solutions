class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum =0;
        for(auto i : nums){
            sum += i;
        }
        if(sum<target) return 0 ;

        sum = 0; int len=INT_MAX; 
        int i=0; int j=0 ;
        int n=nums.size() ;

        while(j<n){
            if((sum +nums[j])<target){
                sum+=nums[j++] ;
            }
            else{
                len = min(abs(j-i+1),len) ;
                sum -= nums[i++] ;
            }
        }
        return len ;
    }
};