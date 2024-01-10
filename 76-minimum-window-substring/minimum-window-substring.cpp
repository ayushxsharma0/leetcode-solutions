class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size() ;
        int counter = t.size() ;
        int i=0; int j=0 ;
        unordered_map<char,int> map ;

        for(auto i : t){
            map[i] ++ ;
        }
        int length = INT_MAX ;
        int start =0 ;
        while(j<m){
            //if char of t is found in s
            if(map[s[j]]>0){
                counter-- ;
            }
            map[s[j]] -- ;
            j++ ;
            //untill window is found

            while(counter==0){
                if(j-i  < length){
                    start = i ;
                    length = j-i ;
                }
                    map[s[i]]++ ;
                    if(map[s[i]] >0){
                    counter++ ;
                }
                i++ ;
            }
        }
        

        if(length != INT_MAX){
            return s.substr(start,length) ;
        }
        return "" ;
    }
};