class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false ;
        }

        vector<int> v1(26) ;
        vector<int> v2(26) ;

        for(auto i : word1){
            v1[i-'a'] ++ ;
        }
        for(auto i : word2){
            v2[i-'a'] ++ ;
        }

        for(int i =0; i<26;i++){
            if((v1[i]==0 && v2[i]!=0) || (v1[i]!=0 && v2[i]==0)){
                return false ;
            }
        }

        sort(v1.begin(),v1.end()) ;
        sort(v2.begin(),v2.end()) ;

        return v1==v2 ;
    }
};