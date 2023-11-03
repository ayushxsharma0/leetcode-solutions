class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s ;
        for(auto i : nums){
            s.insert(i) ;
        }
        int ans = 0 ;
        int count =1 ;
        for(auto i :s){
            if(s.find(i+1) != s.end()){
                i++ ;
                count++ ;
            }
            else{
                ans = max(ans,count) ;
                count =1 ;
                i++ ;
            }
        }
        return ans ;
    }
};