class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size() ;

        vector<pair<int,int>> vec ;

        for(int i = 0 ;i<n;i++){
            vec.push_back({capital[i], profits[i]}) ;
        }
        sort(vec.begin(), vec.end()) ;
        priority_queue<int> pq ;

        int i = 0 ;
        for(i = 0;i<n;i++){
            if(vec[i].first <= w){
                pq.push(vec[i].second) ;
            }
            else{
                break ;
            }
        }

        while(k-- && !pq.empty()){
            int t = pq.top() ;
            pq.pop() ;
            w += t ;

            while(i < n && vec[i].first <= w){
                pq.push(vec[i].second) ;
                i++ ;
            }
        }
        return w ;
    }
};