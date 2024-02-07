class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq ;

        unordered_map<char,int> mp ;
        for(auto i : s){
            if(iswalnum(i)){
                mp[i] ++ ;
            }
        }
        for(auto i : mp){
            pq.push({i.second,i.first}) ;
        }
        string ans = "" ;

        while(!pq.empty()){
            int k = pq.top().first ;
            while(k--){
                ans += pq.top().second ;
            }
            pq.pop() ;
        }
        return ans ;
    }
};