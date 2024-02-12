class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using extra space
        // int n = nums.size() ; 
        // unordered_map<int,int> mp ;
        // for(auto i : nums){
        //     mp[i]++ ;
        // }
        // for(auto it : mp){
        //     if(it.second > floor(n/2)){
        //         return it.first ;
        //     }
        // }
        // return 0 ;

        //boyer moore algorithm
        int votes = 0 ;
        int curr =nums[0] ;

        for(int i =0;i<nums.size() ;i++){
            if(curr == nums[i]){
                votes ++ ;
            }
            else{
                votes-- ;
            }
            if(votes == 0){
                curr = nums[i] ;
                votes = 1 ;
            }
        }
        return curr ;
    }
};