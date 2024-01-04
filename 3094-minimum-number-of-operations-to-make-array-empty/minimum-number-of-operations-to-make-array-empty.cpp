class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp ;
        for(auto i : nums){
            mp[i]++ ;
        }
        int ans =0 ;
        for(auto &it : mp){
            int n = it.second ;
            if(n==1) return -1 ;
            if(n%3 ==0 ){
                ans+= n/3 ;
                continue ;
            }
            while(n >=2){
                ans++ ;
                n-=3 ;
            }
            if(n==1){
                ans++ ;
            }
            if(n ==2 ){
                ans++ ;
            }
        }
        return ans ;
    }
};