class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //brute force approach
        // int n = nums.size() ;
        // vector<int> ans ;
        // int mx ;
        // int count ;
        // for(int i=0; i<=n-k;i++){
        //     mx = INT_MIN ;
        //     count = k ; 
        //     int j=i ;
        //     while(count){
        //         mx = max(mx,nums[j++]) ;
        //         count-- ;
        //     }
        //     ans.push_back(mx) ;
        // }
        // return ans ;
        //working nicely :))

        //sliding window

        //deque is made to store maximum element
        int i=0; int j=0; vector<int> ans; 
        int n = nums.size() ;
        deque<int> q ;
        while(j<n){
            while(!q.empty() && nums[q.back()] < nums[j]){
                q.pop_back() ;
            }
            q.push_back(j) ;
            if(i> q.front()){
                q.pop_front() ;
            }
            if(j+1 >=k){
                ans.push_back(nums[q.front()]) ;
                i++ ;
            } 
            j++ ;
        }
        return ans ;
    }
};