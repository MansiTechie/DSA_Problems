class NumArray {
    vector<int> p;
public:
    NumArray(vector<int>& a) {
        p={0};
        for(int x:a) p.push_back(p.back()+x);

    }
    
    int sumRange(int l, int r) {
        return p[r+1]-p[l];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */