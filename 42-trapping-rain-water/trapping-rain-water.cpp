class Solution {
public:
    int trap(vector<int>& h) {
        // //for each index find the max on both sides then ppy the formula to calculate  
        // // volume of water that can come in it
        // int ans =0 ;
        // int s,e ;
        // int left, right ;
        // int n = h.size() ;
        // //first and last index will have zero always
        // for(int i =1; i<n-1;i++){
        //     s = i-1 ; e=i+1 ;
        //     left = 0; right = 0 ;
        //     while(s>=0){
        //         left = max(h[s],left) ;
        //         s-- ;
        //     }
        //     while(e<=n-1){
        //         right = max(right,h[e]) ;
        //         e++ ;
        //     }
        //     int height = min(left,right) ;
        //     h[i] < height ? ans+= (height-h[i]) : ans+=0 ;
        // }
        // return ans ;
        // the above solution gives TLE as it in O(n2) !!
        int n = h.size() ;
        vector<int> leftmax(n) ; //to store maximum height at left of index i
        vector<int> rightmax(n) ;
        leftmax[0] = 0 ;
        rightmax[n-1] = 0 ;  //endpoints
        int ans =0; 

        for(int i =1; i<n;i++){
            leftmax[i] = max(leftmax[i-1],h[i-1]) ;
        }

        for(int i=n-2;i>=0;i--){
            rightmax[i] = max(rightmax[i+1],h[i+1]) ;
        }

        for(int i =0;i<n;i++){
            int height = min(leftmax[i],rightmax[i]) ;

            height > h[i] ? ans+=(height-h[i]) : ans+=0 ;
        }
        return ans ;
    }
};