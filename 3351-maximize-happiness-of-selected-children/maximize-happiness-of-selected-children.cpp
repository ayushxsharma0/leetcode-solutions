class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        int iter = 0;
        sort(happiness.begin(),happiness.end()) ;

        //start from the end and take the values until k is zero 

        for(int j = happiness.size()-1;j>=0;j--){
            if(k==0){
                break ;
            }
            if(happiness[j] - iter >0){   //happiness can't be negative
                ans += happiness[j] - iter ;
            }
            iter++ ;
            k-- ;
        }
        return ans ;
    }
};