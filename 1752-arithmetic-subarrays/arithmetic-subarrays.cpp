class Solution {
public:

    bool check(vector<int> arr, int x, int y){
        vector<int> v ;
        for(int i =x;i<=y;i++){
            v.push_back(arr[i]) ;
        }
        sort(v.begin(),v.end()) ;
        int diff= v[1]-v[0] ;

        for(int i =2 ;i<v.size();i++){
            if(v[i]-v[i-1] != diff){
                return false ;
            }
        }
        return true ;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans ;
        for(int i=0; i<l.size();i++){
            int x= l[i]; int y= r[i] ;
            ans.push_back(check(nums,x,y)) ; 
        }    
        return ans ;
    }
};