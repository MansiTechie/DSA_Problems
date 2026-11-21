class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
       int ans=0,c=0;
       for(int x:a) {
        c=x?c+1:0;
        ans=max(ans,c);

       } 
       return ans;
    }
};