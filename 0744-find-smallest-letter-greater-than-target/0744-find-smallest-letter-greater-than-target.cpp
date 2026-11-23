class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char t) {
        for(char c:a) if(c>t) return c;
        return a[0];
    }
};