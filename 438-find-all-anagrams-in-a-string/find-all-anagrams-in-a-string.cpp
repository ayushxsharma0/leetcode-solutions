class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = p.size() ;
        int n = s.size() ;

        if(m>n) return {} ;
        vector<int> ans ;
        //first check the first m characters of the s2 string 
        vector<int> v(26) ;

        for(int i=0; i<m;i++){
            v[p[i] - 'a'] ++ ;
            v[s[i] - 'a'] -- ;
        }
        //check if we found our solution
        if(check(v)){
            ans.push_back(0) ;
        }
        //now use sliding window 
        //increase the frequency of new element and decrease the freq of the last one

        for(int i =m;i<n;i++){
            v[s[i] - 'a'] -- ;
            v[s[i - m] - 'a'] ++ ;

            if(check(v)){
                ans.push_back(i-m+1) ;
            } 
        }
        return ans ;
    }
    bool check(vector<int>& v){
        for(int i =0 ;i<26;i++){
            if(v[i] != 0) return false ;
        }
        return true ;
    }
};