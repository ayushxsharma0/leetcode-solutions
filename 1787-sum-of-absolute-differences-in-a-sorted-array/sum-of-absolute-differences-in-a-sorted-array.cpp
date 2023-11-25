class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        //brute force approach       TC = O(n*n)
        //also this approach gives TLE
        // int n = nums.size();
        // vector<int> ans ;
        // int sum =0;
        // for(int i =0;i<n;i++){
        //     sum =0;
        //     for(int j =0;j<n;j++){
        //         if(j==i) continue ;
        //         sum += abs(nums[j]-nums[i]) ;
        //     }
        //     ans.push_back(sum) ;
        // }
        // return ans ;
        int n = nums.size() ;
        vector<int> ans(n,0) ;
        vector<int> prefix(n,0) ;
        vector<int> suffix(n,0) ;
        //first calculate the prefix array and suffix sum array
        long long sum =0;
        for(int i =0;i<n;i++){
            sum += nums[i] ;
            prefix[i] = sum ;
        }
        sum = 0;
        for(int i =n-1;i>0;i--){
            sum+=  nums[i] ;
            suffix[i] = sum ;
        }
        sum =0;
        //for first entry
        for(int i=1;i<n;i++){
            sum += abs(nums[i] - nums[0]) ;
        }
        ans[0] = sum ;
        
        for(int i =1; i<n;i++){
            int x = i;
            int y = n-i-1 ; 
            int ssum = suffix[i] - nums[i]*y ;
            int psum = nums[i]*x - prefix[i]  ;
            ans[i] = ssum +psum ;
        }
        return ans ;
    }
};