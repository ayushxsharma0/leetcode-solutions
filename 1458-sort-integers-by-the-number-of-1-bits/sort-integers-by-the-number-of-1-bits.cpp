class Solution {
public:
    static int numbit(int a){
        int count =0;
        while(a){
            count++ ;
            a &= a-1 ;
        }
        return count ;
    }

    static bool comp(int x, int y){
        int countbit = numbit(x) ;
        int countbit2 = numbit(y) ;

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