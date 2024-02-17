class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        // MinHeap (height[i]-height[i-1], i)
        priority_queue<int, vector<int>, greater<int>> pq;
        int i=0, jump=0;
        for(i=1; i<n ; i++){
            jump=heights[i]-heights[i-1];
            if (jump>0) {
                pq.emplace(jump); 
                if (pq.size()>ladders){// Keep the largest `ladders' jumps in heap
                    bricks-=pq.top(); // remaining brick
                    pq.pop();
                } 
                if  (bricks<0) return i-1;
            }
        }
        return n-1;
    }
};