class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp ;

        for(auto i : nums1){
            mp[i]++ ;
        }
        set<int> s ;

        for(auto i : nums2){
            if(mp[i] >0 && s.find(i)==s.end()){
                s.insert(i) ;
            }
        }
        vector<int>  ans ;
        for(auto i : s){
            ans.push_back(i) ;
        }
        return ans ;
    }
};