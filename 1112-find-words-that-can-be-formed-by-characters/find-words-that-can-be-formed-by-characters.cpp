class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        //map to store frequency of character in chars
        unordered_map<char,int> mp ;
        for(auto i : chars){
            mp[i] ++ ;
        }
        string s ;
        int ans =0 ;
        bool b=true ;
        unordered_map<char,int> mapp ;  //map to stor freq of chars in string
        for(int i =0; i<words.size();i++){
            s = words[i] ;
            for(auto i : s){
                mapp[i] ++ ;
            }
            for(auto i : s){
                if(mapp[i] > mp[i]){
                    b = false ;
                    break ;
                }
            }
            if(b) ans+= s.size() ;
            b= true ;
            mapp.clear() ;
        }
        return ans ;
    }
};