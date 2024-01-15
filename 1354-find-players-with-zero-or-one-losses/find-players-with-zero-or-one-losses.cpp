class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> loss(100001,0) ;
        vector<int> win(100001,0) ;

        for(auto i : matches){
            win[i[0]] ++ ;
            loss[i[1]] ++ ;
        }
        vector<vector<int>> ans(2) ;
        for(int i=0 ; i<100001;i++){
            if(loss[i] == 0 && win[i] !=0){
                ans[0].push_back(i) ;
            }
            if(loss[i] == 1){
                ans[1].push_back(i) ;
            }
        }
        return ans ;
    }
};