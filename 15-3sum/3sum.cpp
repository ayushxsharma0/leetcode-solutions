class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //sort the array
        int n = nums.size() ;
        vector<vector<int>> ans ;
        sort(nums.begin(),nums.end()) ;
        //fix one number
        for(int i =0;i<n;i++){
            if(nums[i] > 0) break ;
            if(i>0 && nums[i] == nums[i-1]) continue ; // to avoid duplicate at the first index
            int j = i+1 ; int k = n-1 ;
            while(j<k){
                int sum = nums[i] + nums[j]+nums[k] ;
                    if(sum == 0){
                        ans.push_back({nums[i],nums[j],nums[k]}) ;
                        //to avoid duplicate at the second index
                        while(k>j && nums[j]==nums[j+1]){
                            j++ ;
                        }
                        //to avoid duplicate at third index
                        while(k>j && nums[k]==nums[k-1]){
                            k-- ;
                        } 
                    }
                    if(sum > 0){
                        k-- ;
                    }
                    else{
                        j++ ;
                    }
                
            }
        }
        return ans ;
    }
};