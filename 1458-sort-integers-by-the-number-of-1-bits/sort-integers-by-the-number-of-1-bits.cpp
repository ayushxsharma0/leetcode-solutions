class Solution {
public:
    // brian kernighan algorithm to find number of 1 bits in a given number
    // static int numbit(int a){
    //     int count =0;
    //     while(a){
    //         count++ ;
    //         a &= a-1 ;
    //     }
    //     return count ;
    // }

    static bool comp(int x, int y){
        int countbit = __builtin_popcount(x) ;  // built in function to count number of set bit(1)
        int countbit2 = __builtin_popcount(y) ;

        if(countbit == countbit2){
            return y>x ;
        }
        return countbit2>countbit ;
    }    
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(),arr.end(),comp) ;
        return arr ;
    }
};