class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> map(n+1,0) ;
        for(auto i : nums){
            map[i] += 1 ;
        } 
        int duplicate =0 ;
        int real =0 ;
        for(int i =0 ; i<map.size();i++){
            if(map[i] ==2){
                duplicate = i ;
            }
            if(i != 0 && map[i]==0){
                real = i ;
            }
        }

        
            return {duplicate,real} ;
        
    }
};