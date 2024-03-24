class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // //using  O(n) space and time
        // unordered_map<int,int> mp ;

        // for(auto i : nums){
        //     mp[i]++ ;
        // }
        // for(auto it : mp){
        //     if(it.second >=2){
        //         return it.first ;
        //     }
        // }
        // return -1 ;

        //o(nlogn) time and O(1) space

        sort(nums.begin(),nums.end()) ;

        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                return nums[i] ;
            }
        }
        return -1 ;
    }
};