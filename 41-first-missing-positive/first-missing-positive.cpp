class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //use a set to store positive numbers in ascending order
        set<int> s ;

        for(auto i : nums){
            if(i>0){
                s.insert(i) ;
            }
        }
        int x = 1 ;
        for(auto i : s){
            if(i == x){
                x++ ;
            }
            else{
                break ;
            }
        }
        return x ;
    }
};