class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mp ;
        // vector<int> ans ;

        // for(auto i : nums){
        //     mp[i]++ ;
        // }
        // for(auto it : mp){
        //     if(it.second > floor(nums.size()/3)){
        //         ans.push_back(it.first) ;
        //     }
        // }
        // return ans ;

        //extended boyers moore

        int count1=0; int count2=0 ;
        int ele1,ele2 ;
        vector<int> ans ;

        for(int i =0; i<nums.size();i++){
            if(count1==0 && nums[i]!=ele2){
                count1 = 1; 
                ele1 = nums[i] ;
            }
            else if(count2==0 && ele1 != nums[i]){
                count2= 1 ;
                ele2 = nums[i] ;
            }
            else if(nums[i] == ele1){
                count1++ ;
            }
            else if(nums[i] == ele2){
                count2++ ;
            }
            else{
                count1-- ;
                count2-- ;
            }
        }
        int sz = (nums.size()/3) + 1 ;
        int c1=0; int c2=0 ;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == ele1){
                c1++ ;
            }
            else if(nums[i] == ele2){
                c2++ ;
            }
        }
        if(c1 >= sz){
            ans.push_back(ele1) ;
        }
        if(c2 >= sz){
            ans.push_back(ele2) ;
        }
        return ans ;
    }
};