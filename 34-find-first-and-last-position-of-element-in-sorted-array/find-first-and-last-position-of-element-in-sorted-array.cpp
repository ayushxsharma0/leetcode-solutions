class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // vector<int> ans = {-1,-1} ;

        // int i =0; int j =nums.size()-1 ;
        // for(;j>=0;j--){
        //     if(nums[j] == target){
        //         ans[1] = j ;
        //         break ;
        //     }
        // }
        // for(;i<nums.size();i++){
        //     if(nums[i] == target){
        //         ans[0] = i ;
        //         break ;
        //     }

        // }
        // return ans ;
        //this works though it is O(n) approach

        //using binary search to get in O(logn) time
        int firstidx = -1 ;
        int lastidx = -1 ;
        int s =0 ;int e = nums.size() -1 ;

        //to find start index
        while(e>=s){
            int mid = (e+s)/2 ;

            if(nums[mid] == target){
                firstidx = mid ;
                e = mid-1 ;
            }
            else if(nums[mid] > target){
                e = mid-1 ;
            }
            else{
                s = mid+1 ;
            }
        }

        if(firstidx == -1) return {-1,-1} ;
        //to find last index
        s = 0;  e = nums.size() -1 ;
    
        while(e>=s){
            int mid = (e+s)/2 ;

            if(nums[mid] == target){
                lastidx = mid ;
                s = mid+ 1 ;
            }
            else if(nums[mid] > target){
                e = mid -1 ;
            }
            else{
                s = mid+1 ;
            }
        }
        return {firstidx,lastidx} ;

    }
};