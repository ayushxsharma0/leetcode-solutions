class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size() ;
        int h = haystack.size() ;
    
        for(int i =0;i<haystack.size();i++){
            if(haystack[i] == needle[0]){
                int x =i; int y =0 ;
                while(x<h && y<n){
                    if(haystack[x] != needle[y]){
                        break ;
                    }
                    x++ ;y++ ;
                    if(y==n){
                        return i;
                    }
                }
            }
        }
        return -1 ;
    }
};