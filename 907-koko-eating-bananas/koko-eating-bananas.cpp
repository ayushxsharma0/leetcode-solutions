class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // //brute force 
        // time complexity = O(n2) 
        // int mx = INT_MIN ; 
        // for(int i =0;i<piles.size();i++){
        //     mx = max(mx,piles[i]) ; 
        // }
        // if(h==piles.size()) return mx ;
        // long long time ;
        // for(int i =1;i<=mx;i++){
        //     time = 0 ;
        //     for(int j=0;j<piles.size();j++){
        //         time += piles[j]/i ;
        //         if(piles[j]%i != 0) time+=1 ;
        //     }
        //     if(time <= h){
        //         return i ;
        //     }
        // }
        // return -1 ;


        // binary search solution
        int n = piles.size() ;
        int mn =1 ; int mx = INT_MAX ;
        
        for(auto i : piles){
            mx = max(mx,i) ; 
        }
        int ans = 0 ;

        while(mx >= mn){
            int mid = mn + (mx-mn)/2 ;

            if(helper(mid,piles) <= h){
                mx = mid -1 ;
                ans = mid ;
            }
            else{
                mn = mid +1 ;
            }
        }
        return ans ;
    }
    int helper(int val, vector<int>&piles){
        long long time =0 ;
        for(auto i : piles){
            time += i/val ;
            if(i%val != 0) time+=1 ;
        }
        return time ;
    }
};