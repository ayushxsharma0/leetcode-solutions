class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //O(n) space and time using hashmap

        // unordered_map<int,int> mp ;
        // for(auto i : nums){
        //     mp[i]++ ;
        // }
        // vector<int> ans ;
        // for(auto i : mp){
        //     if(i.second == 2){
        //         ans.push_back(i.first) ;
        //     }
        // }
        // return ans ;

        //O(1) approach -> basically marking index which is already seen
        int n = nums.size() ;
        vector<int> ans ;

        for(int i = 0 ;i<n;i++){
            int idx = abs(nums[i]) - 1 ;
            if(nums[idx] < 0){
                ans.push_back(idx+1) ;
            }
            nums[idx] *= -1 ;
        }
        return ans ;
    }
};