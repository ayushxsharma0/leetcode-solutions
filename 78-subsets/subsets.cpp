class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans ;
        vector<int> vec ;
        int n = nums.size() ;

        dfs(0,ans,vec,n,nums) ;

        return ans ;
    }

    void dfs(int i, vector<vector<int>> &ans, vector<int> &vec, int n,vector<int> nums){
        if(i>=n){
            ans.push_back(vec) ;
            return ;
        } //all nums have been taken

        //include the number
        vec.push_back(nums[i]) ;
        dfs(i+1,ans,vec,n,nums) ;

        vec.pop_back() ;

        //do not include the number
        dfs(i+1,ans,vec,n,nums) ;
    }
};