class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // //simple trick
        // vector<int> vec ;
        // for(auto i : nums){
        //     vec.push_back(i*i) ;
        // }
        // sort(vec.begin(),vec.end()) ;
        // return vec ;

        //two pointers approach
        int n = nums.size() ;
        int i =0; int j = n-1 ;
        vector<int> vec(n,0) ;
        int idx = n-1 ;
        while(j>=i){
            int x = nums[i] ; int y = nums[j] ; 
            if(x*x >= y*y){
                vec[idx--] = x*x ;
                i++ ;
            }
            else{
                vec[idx--] = y*y ;
                j-- ;
            }
        }
        return vec ;
    }
};