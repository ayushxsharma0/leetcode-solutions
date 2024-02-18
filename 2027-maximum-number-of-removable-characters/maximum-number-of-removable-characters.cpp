class Solution {
public:

    bool subsequence(string s, string p){
        int count = 0 ;
        for(int i =0;i<s.size();i++){
            if(s[i] == '0') continue ;
            if(s[i] == p[count]){
                count++ ;
            }
        }
        return count == p.size() ;
    }

    int maximumRemovals(string s, string p, vector<int>& removable) {
        // O(n2) solution and gives TLE
        // int n = removable.size() ;
        // int i ;
        // int count = 0 ;
        // for(i =0; i<n;i++){
        //     string dummy = s ;
        //     for(int j=0;j<=i;j++){
        //         dummy[removable[j]] = '0' ;
        //     }
        //     if(!subsequence(dummy,p)) break ;
        //     else{
        //         count++ ;
        //     }
        // }
        // return count ;
        int n = removable.size() ;
        int start = 0; int e = n-1 ;
        string dummy ;
        int count = -1 ;
        while(e>=start){
            int mid = start + (e-start)/2 ;
            dummy = s ;
            for(int i =0;i<=mid;i++){
                dummy[removable[i]] = '0' ;                
            }
            if(subsequence(dummy,p)){
                start = mid+1 ;
                count = max(count,mid) ;
            }
            else{
                e = mid -1 ;
            }
        }
        return count +1 ;
    }
};