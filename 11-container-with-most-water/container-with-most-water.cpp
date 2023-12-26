class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN ;
        int n = height.size() ;
        int s =0; int e= n-1 ;
        while(e>s){
            int h = min(height[s],height[e]) ;
            ans = max(ans,h*(e-s)) ;

            //shift the pointer which is minimum cuz we want to maximise the height
            if(height[e] > height[s]){
                s++ ;
            }
            else{
                e-- ;
            }
        }
        return ans ;
    }
};