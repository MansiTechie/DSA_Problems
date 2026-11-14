class Solution {
public:
    int sum(int n) {
        int s=0;
        while(n) s+=(n%10)*(n%10), n/=10;
        return s;
    }
    bool isHappy(int n) {
        while(n!=1 && n!=4) n=sum(n);
        return n==1;
    }
};