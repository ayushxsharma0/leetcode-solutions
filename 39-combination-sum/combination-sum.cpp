class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> vec;
        int n = candidates.size();

        helper(ans,0, vec, candidates, target);
        return ans ;
    }

    void helper(vector<vector<int>>& ans,int i, vector<int>& vec,
                vector<int> nums, int target){

                    //base condition
                    // if(sum == target){
                    //     ans.push_back(vec) ;
                    //     return ;
                    // }
                    // if(sum > target){
                    //     return ;
                    // }

                    // //check all possibilities
                    // for(int i =0;i<nums.size();i++){
                    //     sum += nums[i] ;
                    //     vec.push_back(nums[i]) ;
                    //     helper(ans,vec,sum,nums,target) ;
                    //     sum -= nums[i] ;
                    //     vec.pop_back() ;
                    // }
                    //the above is my first approach and it works, though it contains duplicates!!!

                    //so we have to modify our decision tree

                    if(target<0 || i>=nums.size()){
                        return ;
                    }
                    if(target == 0){
                        ans.push_back(vec) ;
                        return ;
                    }

                    vec.push_back(nums[i]) ;
                    helper(ans,i,vec,nums,target-nums[i]) ;
                    vec.pop_back() ;

                    helper(ans,i+1,vec,nums,target) ;
                    
                }
};