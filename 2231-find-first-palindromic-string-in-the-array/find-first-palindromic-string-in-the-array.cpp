class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        //take a string and check it
        for(auto i : words){
            int s = 0 ;
            int e = i.size() - 1;

            while(e>=s){
                if(i[s] != i[e]){
                    break ;
                }
                s++ ; e-- ;
            }
            if(e<=s){
                return i ;
            }
        }
        return "" ;
    }
};