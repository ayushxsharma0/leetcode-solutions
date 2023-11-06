class SeatManager {
public:
    int seat =1 ;
    int vacant = 0 ;
    priority_queue<int,vector<int>, greater<int>> pq ;
    SeatManager(int n) {
        
    }
    
    int reserve() {
        if(!pq.empty() && pq.top()<=seat){
            int x = pq.top() ;
            pq.pop() ;
            return x ;
        }
        return seat++ ;
    }
    
    void unreserve(int seatNumber) {
        vacant = seatNumber ;
        pq.push(vacant) ;
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */