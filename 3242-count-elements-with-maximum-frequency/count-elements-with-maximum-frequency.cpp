class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> v(101,0) ;

        for(auto i : nums){
            v[i]++ ;
        }
        int mx = INT_MIN ;
        int ans = 0 ;
        for(int i=1;i<v.size();i++){
            if(v[i] > mx){
                mx = v[i] ;
                ans = 0 ;
                ans += v[i]  ;
            }
            else if(v[i] == mx){
                ans += v[i] ;
            }
        }
        return ans ;
    }
};