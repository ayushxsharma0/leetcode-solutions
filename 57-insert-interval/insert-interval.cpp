class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& i, vector<int>& newi) {
        vector<vector<int>> ans ;
        int n = i.size() ;
        //push untill we find the interval i whose i[1] > newi[0]
        int idx = 0 ;
        while(idx < n && i[idx][1] < newi[0]){
            ans.push_back(i[idx]) ;
            idx++ ;
        }

        //now we are at the mergingintervl
        while(idx < n && i[idx][0] <= newi[1]){
            newi[0] = min(newi[0], i[idx][0]) ;
            newi[1] = max(newi[1], i[idx][1]) ;
            idx++ ;
        }
        ans.push_back(newi) ;
        while(idx < n){
            ans.push_back(i[idx]) ;
            idx++ ;
        }
        return ans ;
    }
};