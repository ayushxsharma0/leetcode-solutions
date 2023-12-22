class Solution {
public:
    int maxScore(string s) {
        int ans = 0 ;
        int zeroes = 0;
        int ones = 0 ;
        // O(n2) approach
        // for(int i =0;i<s.size()-1;i++){
        //     int f=0 ; int e = i+1 ;
        //     zeroes = 0; ones = 0 ;
        //     while(f<=i){
        //         if(s[f] == '0'){
        //             zeroes++ ;
        //         }
        //         f++ ;
        //     }
        //     while(e<s.size()){
        //         if(s[e] =='1'){
        //             ones++ ;
        //         }
        //         e++ ;
        //     }
        //     int sum = zeroes+ones ;
        //     ans = max(sum,ans) ;
        // }
        // return ans ;

        //o(n) approach
        for(int i =0; i<s.size();i++){
            if(s[i] == '1') ones++ ;
        }
        for(int i =0; i<s.size()-1;i++){
            if(s[i] == '1'){
                ones-- ;
            }
            else{
                zeroes++ ;
            }

            ans = max(ans,zeroes+ones) ;
        }
        return ans ;
    }
};