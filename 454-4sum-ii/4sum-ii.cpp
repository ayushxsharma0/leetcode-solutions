class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        //one is the brute force approach which has O(n**4) time complexity
        // int count = 0 ;
        // for(auto i : nums1){
        //     for(auto j : nums2){
        //         for(auto k : nums3){
        //             for(auto l : nums4){
        //                 if(i+j+k+l == 0){
        //                     count++ ;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return count ;
        // and obviously this gives TLE !!

        //this approach is O(n**2)

        unordered_map<int,int> mp ;

        for(auto i : nums1){
            for(auto j : nums2){
                mp[i+j] ++ ;
            }
        }
        int count = 0 ;
        for(auto i : nums3){
            for(auto j : nums4){
                int x = -(i+j) ;
                if(mp[x] != 0){
                    count += mp[x] ;
                }
            }
        }
        return count ;
    }
};