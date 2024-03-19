class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int sz = tasks.size() ;
        vector<int> vec(26,0) ;

        int mx = 0 ;
        int mxcount = 0 ;

        for(auto i : tasks){
            vec[i-'A']++ ;
            if(mx == vec[i-'A']){
                mxcount++ ;
            }
            else if(mx < vec[i-'A']){
                mx = vec[i-'A'] ;
                mxcount = 1 ;
            }
        }
        //number of idle slots 
        int part = mx - 1 ;
        int partlen = n - (mxcount-1) ;
        int emptyslots = part * partlen ;
        int avail = sz - mx*mxcount ;
        int idles = max(0,emptyslots - avail) ;

        return sz + idles ;
    }
};