class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size() ;
        int i =0;
        int j=1 ;
        int ans=0 ;
        //traverse through the array
        priority_queue<int, vector<int>,greater<int>> pq ;
        while(i<n && j<n){
            if(colors[i] != colors[j]){
                i++ ; j++ ;
            }
            if(colors[i]==colors[j]){
                pq.push(neededTime[i]) ;
                pq.push(neededTime[j]) ;
                j++ ;
                while(j<n && (colors[i]==colors[j])){
                    pq.push(neededTime[j]) ;
                    j++ ;
                }
                while(pq.size() != 1){
                    ans += pq.top() ;
                    pq.pop() ;
                }
                while(pq.size()) pq.pop() ;
                i=j ;
                j++ ;
            }
        }
        return ans ;
    }
};