class MedianFinder {
    priority_queue<int> a;
    priority_queue<int,vector<int>,greater<int>> b;
public:
    void addNum(int x) {
        a.push(x);
        b.push(a.top());
        a.pop();
        if(b.size()>a.size()) {
            a.push(b.top());
            b.pop();
        }
    }
    double findMedian() {
        return a.size()>b.size()?a.top():(a.top()+b.top())/2.0;
    }
        
    
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */