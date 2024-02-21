class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //using extra space 
        int n = nums.size() ;
        set<int> s ;

        for(auto i : nums){
            s.insert(i) ;
        }
        int k = s.size() ;
        int num =0 ;
        for(auto it : s){
            nums[num++] = it ;
        }
        
        return k ;
    }
};