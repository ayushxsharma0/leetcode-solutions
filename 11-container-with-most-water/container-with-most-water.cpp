class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN ;
        int n = height.size() ;
        //naive approach 
        //check for all the containers possible
        //gives TLE
        // for(int i =0; i<n;i++){
        //     for(int j = i+1;j<n;j++){
        //         int h = min(height[i],height[j]) ;
        //         ans = max(ans,h*(j-i)) ;
        //     }
        // }

        int s =0; int e= n-1 ;
        while(e>s){
            int h = min(height[s],height[e]) ;
            ans = max(ans,h*(e-s)) ;

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