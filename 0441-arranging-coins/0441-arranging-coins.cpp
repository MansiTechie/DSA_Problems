class Solution {
public:
    int arrangeCoins(int n) {
        long long k=0;
        while(n>=k+1) n-=++k;
        return k;
    }
};