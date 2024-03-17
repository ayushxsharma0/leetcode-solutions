class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // use a 3 valued vector to store the points
        vector<vector<int>> v;

        for (auto& i : points) {
            v.push_back({i[0] * i[0] + i[1] * i[1], i[0], i[1]});
        }

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
            pq(v.begin(), v.end());
        
        vector<vector<int>> ans ;
        while(k--){
            vector<int> t = pq.top() ;
            pq.pop() ;

            ans.push_back({t[1],t[2]}) ;
        }
        return ans ;
    }
};