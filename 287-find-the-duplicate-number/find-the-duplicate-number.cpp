class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // //using  O(n) space and time
        // unordered_map<int,int> mp ;

        // for(auto i : nums){
        //     mp[i]++ ;
        // }
        // for(auto it : mp){
        //     if(it.second >=2){
        //         return it.first ;
        //     }
        // }
        // return -1 ;

        // ---------------------------------------------------------------------------

        // //o(nlogn) time and O(1) space but modification in the array is made

        // sort(nums.begin(),nums.end()) ;

        // for(int i = 0;i<nums.size()-1;i++){
        //     if(nums[i] == nums[i+1]){
        //         return nums[i] ;
        //     }
        // }
        // return -1 ;

        //-------------------------------------------------------------------------------

        //floyd tortoise hare algorithm 

        int slow = nums[0] ;
        int fast = nums[0] ;

        do{
            slow = nums[slow] ; //move by one
            fast = nums[nums[fast]] ; //move by two
        }while(slow != fast) ;

        slow = nums[0] ;

        while(slow != fast){
            slow = nums[slow] ;
            fast = nums[fast] ;
        }
        return slow ;
        
    }
};