class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> p ;
        for(int i =0; i<points.size();i++){
            p.push_back(points[i][0]) ;
        }
        sort(p.begin(), p.end()) ;
        int ans = 0 ;
        for(auto i =0;i<p.size()-1;i++){
            int diff = p[i+1] - p[i] ;
            ans = max(ans,diff) ;
        }
        return ans ;
    }
};