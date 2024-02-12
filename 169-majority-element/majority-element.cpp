class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using extra space
        int n = nums.size() ; 
        unordered_map<int,int> mp ;
        for(auto i : nums){
            mp[i]++ ;
        }
        for(auto it : mp){
            if(it.second > floor(n/2)){
                return it.first ;
            }
        }
        return 0 ;
    }
};