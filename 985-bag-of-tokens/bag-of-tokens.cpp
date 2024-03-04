class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end()) ;
        int n = tokens.size(); 
        int i =0; int j = n-1 ;
        int score = 0 ;
        while(j>=i){
            if(tokens[i] <= power){
                power -= tokens[i] ;
                score += 1 ;
                i++ ;
            }
            else if(j>i && score>0){
                score -= 1 ;
                power += tokens[j--] ;
            }
            else{
                break ;
            }
        }
        return score ;
    }
};