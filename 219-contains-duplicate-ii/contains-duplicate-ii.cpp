class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size() ;
        if(n ==1){
            return false ;
        }
        //O(n2) solution ans gives TLE @48th TC
    //     for(int i =0;i<n;i++){

    //         for(int j=i+1;j<n;j++){
    //             if(nums[i] == nums[j]){
    //                 if(abs(i-j) <=k){
    //                     return true ;
    //                 }
    //             }
    //         }
    //     }
    //     return false ;
        unordered_map<int,vector<int>>mp ;
        
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i) ;
        }

        for(auto it : mp){
            int sz = it.second.size() ;
            if(sz > 1){
                for(int i =0;i<sz;i++){
                    for(int j=i+1;j<sz;j++){
                        if(abs(it.second[i]-it.second[j]) <= k) return true ;
                    }
                }
            }
        }
        return false ;
    }
};