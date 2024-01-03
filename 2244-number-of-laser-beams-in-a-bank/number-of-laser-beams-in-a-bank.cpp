class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        //NUMBER OF LASERS = DEVICES IN PREV. ROW * DEVICES IN CURRENT ROW
        int m = bank.size() ;
        int n = bank[0].size() ;
        int prev =0; int curr = 0; int ans =0; 
        for(int i=0;i<m;i++){
            curr =0 ;
            for(int j=0;j<n;j++){
                if(bank[i][j] == '1') curr++ ;
            }
            if(prev != 0) ans+=curr*prev ;

            if(curr != 0) prev = curr ;
        }
        return ans ;
    }
};