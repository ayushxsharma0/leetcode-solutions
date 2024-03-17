class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& in) {
        int m = in.size() ;
        vector<vector<int>> ans ;

        sort(in.begin(),in.end(),[](const vector<int>&v1, const vector<int> &v2){
            return v1[0] < v2[0] ;
        }) ;

        ans.push_back(in[0]) ;
        for(int i = 1;i<m;i++){
            auto t = ans.back() ;

            if(in[i][0] > t[1]){
                ans.push_back(in[i]) ;
            }
            else if (in[i][1] > t[1]){
                ans.pop_back() ;
                t[1] = in[i][1] ;
                ans.push_back(t) ;
            }
        }
        return ans ;
    }
};