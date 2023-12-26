class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //sort the array
        int n = nums.size() ;
        vector<vector<int>> ans ;
        set<vector<int>> s ;
        sort(nums.begin(),nums.end()) ;
        //fix one number
        for(int i =0;i<n;i++){
            int j = i+1 ; int k = n-1 ;
            int x = nums[i] ;
            while(j<k){
                
                    if((x+nums[j]+nums[k]) == 0){
                        s.insert({x,nums[j],nums[k]}) ;
                    }
                    if((x+nums[j]+nums[k]) > 0){
                        k-- ;
                    }
                    else{
                        j++ ;
                    }
                
            }
        }
        //to remove duplicates.... though time limit gets exceeded!!
        // set<vector<int>> s ;
        // for(auto i : ans){
        //     s.insert(i) ;
        // }
        // ans.clear() ;
        for(auto i : s){
            ans.push_back(i) ;
        }

        return ans ;
    }
};