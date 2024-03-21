//for the median, the values should be in ascending order
//insert ans sort the vector and then find the median, obv this gives TLE 

class MedianFinder {
public:
    //two heaps
    //one heap(maxheap) will always contain elements smaller than the other heap(minheap)

    priority_queue<int> maxheap ;
    priority_queue<int, vector<int>, greater<int>> minheap ;
    MedianFinder() {
    }
    
    void addNum(int num) {
        maxheap.push(num) ;
        minheap.push(maxheap.top()) ;
        maxheap.pop() ;
        //always have more numbers in max heap if necessary
        if(minheap.size() > maxheap.size()){
            maxheap.push(minheap.top()) ;
            minheap.pop() ;
        }
    }
    
    double findMedian() {
        if(maxheap.size() > minheap.size()){
            return maxheap.top() ;
        }
        else{
            return (maxheap.top() + minheap.top()) /2.0 ;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */