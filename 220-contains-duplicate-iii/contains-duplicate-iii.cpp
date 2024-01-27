class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        
        int n = nums.size() ;
        set<int> s ;

        for(int i =0;i<n;i++){
            if(i>indexDiff){
                s.erase(nums[i- indexDiff -1]) ;
            }
            //|num - nums[i]| <= valueDiff
            // -valueDiff <= nums - nums[i] <= valueDiff
            //instead of the following linear search, we gotta do binary search

            // for(auto it : s){
            //     if(abs(it - nums[i]) <= valueDiff){
            //         return true ;
            //     }
            // }

            auto pos = s.lower_bound((long)nums[i] - (long)valueDiff) ;
            if(pos != s.end() && (long)*pos - (long)nums[i] <=valueDiff){
                return true ;
            }

            s.insert(nums[i]) ;
        }
        return false ;
    }
};