class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        //brute force approach
        //traverse the array from the point till you find warmer temperature

        // int n = temp.size() ;
        // vector<int> arr(n,0) ;

        // for(int i = 0;i<n;i++){
        //     for(int j =i;j<n;j++){
        //         if(temp[j] > temp[i]){
        //             arr[i] = j-i ;
        //             break ;
        //         }
        //     }
        // }
        // return arr ;

        //obviously it gave TLE ! O-O

        //we can use monotonic stack to solve this
        int n = temp.size() ;

        stack<pair<int,int>> st ;
        vector<int> ans(n,0) ;

        for(int i =0;i<n;i++){
            int currday = i ;
            int currtemp = temp[i] ;

            while(!st.empty() && st.top().second < currtemp){
                int prevday = st.top().first ;
                int prevtemp = st.top().second ;
                st.pop() ;

                ans[prevday] = currday - prevday ;
            }
            st.push({currday,currtemp}) ;
        }   
        return ans ;
    }
};