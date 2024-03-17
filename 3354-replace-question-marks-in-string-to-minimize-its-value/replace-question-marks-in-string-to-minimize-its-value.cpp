class Solution {
public:
    string minimizeStringValue(string s) {
        int n = s.size() ;
        vector<int> v(26,0) ;
        for(auto c : s){
            if(c != '?'){
                v[c-'a']++ ;
            }
        }
        string p = "" ;
        for(int i = 0;i<n;i++){
            if(s[i] == '?'){
                int mn = INT_MAX ;
                int idx = -1 ;
                for(int j =0;j<26;j++){
                    if(mn > v[j]){
                        mn = v[j] ;
                        idx = j ;
                    }
                }
                p += idx + 97 ;
                // s[i] = idx + 97 ;
                v[idx]++ ;
            }
        }
        sort(p.begin(),p.end()) ; int idx = 0 ;
        for(auto &ch : s){
            if(ch == '?'){
                ch = p[idx++] ;
            }
        }
        return s ;
    }
};