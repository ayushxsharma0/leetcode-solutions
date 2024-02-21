class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size() ;
        map<int,int> mp ;

        for(auto i : nums){
            mp[i]++ ;
        }
        int idx = 0 ;
        for(auto it : mp){
            if(it.second >= 2){
                nums[idx++] = it.first ;
                nums[idx++] = it.first ;
            }
            else{
                nums[idx++] = it.first ;
            }
        }
        return idx ;
    }
};