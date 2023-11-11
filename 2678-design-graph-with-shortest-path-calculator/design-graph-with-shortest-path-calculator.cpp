class Graph {
public:
    //this matrix stores the pair of integer for each vertex
    // pair -> (end,cost) 
    vector<vector<pair<int,int>>> matrix ;

    Graph(int n, vector<vector<int>>& edges) {
        matrix.resize(n) ;
        for(auto i : edges){
            matrix[i[0]].emplace_back(i[1],i[2]) ;
        }    
    }
    
    void addEdge(vector<int> edge) {
        matrix[edge[0]].emplace_back(edge[1],edge[2]) ;
    }
    
    int shortestPath(int node1, int node2) {
        return dijkstra(node1,node2) ;
    }
    private:
    int dijkstra(int start,int end){
        int n = matrix.size() ;
        vector<int> dist(n, INT_MAX) ;
        dist[start] = 0 ;

        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> pq ;
        pq.push({0,start}) ;

        while(!pq.empty()){
            int node = pq.top().second ;
            int cost = pq.top().first ;
            pq.pop() ;
            //if lower cost is already found
            if(cost > dist[node]){
                continue ;
            }
            // final node is found 
            if(node == end) return cost ;

            for(auto edge : matrix[node]){
                int neighbour = edge.first, length = edge.second ;
                int newcost = length + dist[node] ;

                if(dist[neighbour] > newcost){
                    dist[neighbour] = newcost ;
                    pq.push({newcost,neighbour}) ;
                }
            }
        }
        return ((dist[end] == INT_MAX) ? -1 : dist[end]) ;
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */