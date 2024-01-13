class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //doesn't work for some test cases !! albeit it is mine approach :)
        // int sz = s1.size() ;
        // int i=0; int j=0 ;
        // char start= s1[0] ;
        // char end = s1[sz-1] ;

        // for(int i =0 ;i<s2.size(); i++){
        //     int count = sz ;
        //     if(s2[i] == start){
        //         int j= i ; int k=0 ;
        //         while(count){
        //             if(s1[k++] != s2[j++]){
        //                 break ;
        //             }       
        //             count-- ;             
        //         }
        //     }
        //     else if(s2[i] == end){
        //         int j=i ; int k = sz-1 ;
        //         while(count){
        //             if(s2[j++] != s1[k--]){
        //                 break ;
        //             }
        //             count-- ;
        //         }
        //     }
        //     if(count == 0){
        //         return true ;
        //     }
        // }
        // return false ;

        int m = s1.size() ;
        int n = s2.size() ;

        if(m>n) return false ;

        //first check the first m characters of the s2 string 
        vector<int> v(26) ;

        for(int i=0; i<m;i++){
            v[s1[i] - 'a'] ++ ;
            v[s2[i] - 'a'] -- ;
        }
        //check if we found our solution
        if(check(v)){
            return true ;
        }
        //now use sliding window 
        //increase the frequency of new element and decrease the freq of the last one

        for(int i =m;i<n;i++){
            v[s2[i] - 'a'] -- ;
            v[s2[i - m] - 'a'] ++ ;

            if(check(v)) return true ;
        }
        return false ;

    }
    bool check(vector<int>& v){
        for(int i =0 ;i<26;i++){
            if(v[i] != 0) return false ;
        }
        return true ;
    }
};