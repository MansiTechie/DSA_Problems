class Solution {
public:
    bool canConstruct(string a, string b) {
        for(char c:a) 
            if(b.find(c)==string::npos) return false;
            else b.erase(b.find(c),1);
        return true;
    }
};