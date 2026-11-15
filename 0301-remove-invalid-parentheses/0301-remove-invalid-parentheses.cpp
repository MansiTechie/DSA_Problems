class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        unordered_set<string> st{s};
        while(true) {
            vector<string> ans;
            for(auto x:st) {
                int b=0;
                for(char c:x) {
                    b+=(c=='(')-(c==')');
                    if(b<0) break;
                }
                if(b==0) ans.push_back(x);
            }
            if(!ans.empty()) return ans;
            unordered_set<string> t;
            for(auto x:st)
                for(int i=0;i<x.size();i++)
                    if(x[i]=='(' || x[i]==')') t.insert(x.substr(0,i)+x.substr(i+1));
            st=t;
        }
    }
};