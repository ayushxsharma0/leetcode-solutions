class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n  = dist.size() ;
        vector<float> time(n,0) ;
        for(int i =0;i<n;i++){
            time[i] = (float)dist[i] / (float)speed[i] ;
        }
        sort(time.begin(),time.end()) ;

        float t=0 ;
        int count = 1;
        for(int i =1;i<n;i++){
            if(++t < time[i]){
                count++ ;
            }
            else{
                break ;
            }
        }
        return count ;
    }
};