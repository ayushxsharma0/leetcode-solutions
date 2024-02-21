class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // //using extra space 
        // int n = nums.size() ;
        // set<int> s ;

        // for(auto i : nums){
        //     s.insert(i) ;
        // }
        // int k = s.size() ;
        // int num =0 ;
        // for(auto it : s){
        //     nums[num++] = it ;
        // }
        // return k ;
        
        int n = nums.size() ;
        int s =0; int j =0 ;
        sort(nums.begin(),nums.end()) ;
        int num = nums[0] ;
        for(int i =0; i<n;i++){
            
            if(nums[i] != num){
                nums[++j] = nums[i] ;
                num = nums[i] ;
            }
        }
        return j +1 ;
    }
};