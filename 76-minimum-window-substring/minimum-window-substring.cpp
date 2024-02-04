class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size() ;
        int count = t.size() ;

        unordered_map<char,int> mp ;
        for(auto i : t){
            mp[i]++ ;
        }
        int len = INT_MAX ;
        int i =0; int j =0; int start ;

        while(j<n){
            //get the required window
            if(mp[s[j]] >0){
                count-- ;
            }
            mp[s[j]]-- ;
            j++ ;
            //when we get the required window

            while(count == 0){
                if(j-i < len){
                    start = i ;
                    len = j-i ;
                }
                mp[s[i]]++ ;
                if(mp[s[i]] > 0){
                    count++ ;
                }
                i++ ;
            }
        }
        return len!= INT_MAX ? s.substr(start,len) : "" ;
    }
};