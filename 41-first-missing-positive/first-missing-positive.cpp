class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //use a set to store positive numbers in ascending order
        // set<int> s ;

        // for(auto i : nums){
        //     if(i>0){
        //         s.insert(i) ;
        //     }
        // }
        // int x = 1 ;
        // for(auto i : s){
        //     if(i == x){
        //         x++ ;
        //     }
        //     else{
        //         break ;
        //     }
        // }
        // return x ;

        // the above approach has O(n) T.C and O(n) S.C.

        //O(n) and O(1) solution !!

        int n = nums.size() ;
        for(int i = 0;i<n;i++){
            if(nums[i] <=0 || nums[i] > n){
                nums[i] = n+1 ;
            }
        }
        //now mark the array as needed

        for(int i =0;i <n;i++){
            int num = abs(nums[i]) ;
            if(num >n) continue ;

            num-- ;
            if(nums[num] > 0){
                nums[num] *= -1 ;
            }
        }

        //check the first num which is non negative
        for(int i =0; i<n ;i++){
            if(nums[i] >= 0){
                return i +1 ; //i.e. we didnt find this number in our previous loop
            }
        }
        return n+1 ;
    }
};