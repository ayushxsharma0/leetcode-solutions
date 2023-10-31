class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> v ;
        v.push_back(pref[0]) ;
        int x ;
        for(int i =1 ;i<pref.size();i++){
            x = pref[i-1] ^ pref[i] ;
            v.push_back(x) ;
        }
        return v ;
    }
};