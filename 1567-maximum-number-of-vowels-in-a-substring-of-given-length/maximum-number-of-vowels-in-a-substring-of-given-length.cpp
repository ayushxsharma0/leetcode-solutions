class Solution {
public:
    int maxVowels(string s, int k) {
        //brute force approach  O(n*k) ans gives TLE :(
        
        // int n = s.size() ;
        // int ans = INT_MIN ;
        // for(int i =0;i<=n-k;i++){
        //     int count=k ;
        //     int j =i ;
        //     int vow =0 ;
        //     while(count--){
        //         if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
        //             vow++ ;
        //         }
        //         j++ ;
        //     }
        //     ans = max(ans,vow) ;
        // }
        // return ans ;

        int n = s.size() ;
        int i=0 ; int j=0 ;
        int ans = INT_MIN ;
        int count = 0 ;
        while(j<n){
            if(j-i == k){
                ans = max(ans,count) ;
                if(ans == k) return count ;
                if(isvowel(s[i++])) count-- ;
                if(isvowel(s[j++])) count++ ;
            }

            else{
                if(isvowel(s[j])) count++ ;
                j++ ;
            }
        }
        ans = max(ans,count) ;
        return ans ;
    }
    bool isvowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true ;
        }
        return false ;
    }
};