class Solution {
public:
    bool judgeCircle(string s) {
        int x=0,y=0;
        for(char c:s)
            if(c=='U') y++;
            else if(c=='D') y--;
            else if(c=='L') x--;
            else x++;
        return x==0 && y==0;
    }
};