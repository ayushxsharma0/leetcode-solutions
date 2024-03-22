class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n1 = s1.size() ;
        int n2 = s2.size() ;
        int n3 = s3.size() ;

        int i = 0;
        int j = 0;
        int k = 0;
        int ans = 0 ;
        while(i<n1 && j<n2 && k<n3){
            if(s1[i] != s2[j] || s2[j] != s3[k] || s3[k] != s1[i]){
                break ;
            }
            i++ ;
            j++ ;
            k++ ;
            ans++ ;
        }
        if(ans == 0){
            return -1 ;
        }
        int res = 0 ;
        if(n3 - k) res += n3-k ;

        if(n2 - j) res+= n2-j ;

        if(n1-i) res+= n1-i ;

        return res ;
    }
};