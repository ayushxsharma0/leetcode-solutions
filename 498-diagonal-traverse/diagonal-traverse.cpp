class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<vector<int>> group(mat.size()+mat[0].size()) ;
        //every elements in a diagonalhave same sum of row and column
        for(int i =0; i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                int sum = i+j ;
                group[sum].push_back(mat[i][j]) ;
            }
        }
        vector<int> ans ;
        for(int i =0; i<group.size();i++){
            if(i %2 ==0) reverse(group[i].begin(),group[i].end()) ;
            for(int j = 0; j<group[i].size();j++){
                ans.push_back(group[i][j]) ;
            }
        }
        return ans ;
    }
};