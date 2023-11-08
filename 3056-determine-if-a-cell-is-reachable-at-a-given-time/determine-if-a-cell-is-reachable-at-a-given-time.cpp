class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x = abs(fx - sx) ;
        int y = abs(fy - sy) ;

        int d = max(x,y) ;

        if(d>0) return t>=d ;
        return t!=1 ;
    }
};