class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i =0 ;
        int num = 1 ;
        vector<string> ans ;
        while(i<target.size()){
            if(target[i] == num){
                ans.push_back("Push") ;
                i++ ;
                num++ ;
            }
            else{
                ans.push_back("Push") ;
                ans.push_back("Pop") ;
                num++ ;
            }
        }
        return ans ;
    }
};