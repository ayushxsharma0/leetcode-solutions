class Solution {
public:
    void sortColors(vector<int>& nums) {
        //using count sort 
        int c0 =0 ;
        int c1=0 ;
        int c2 =0 ;

        for(auto i : nums){
            if(i == 0) c0++ ;
            if(i ==1) c1++ ;
            if(i ==2) c2++ ;
        }
        nums.clear() ;
        while(c0--){
            nums.push_back(0) ;
        }
        while(c1--){
            nums.push_back(1) ;
        }
        while(c2--){
            nums.push_back(2) ;
        }
    }
};