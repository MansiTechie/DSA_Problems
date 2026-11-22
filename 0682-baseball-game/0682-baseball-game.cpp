class Solution {
public:
    int calPoints(vector<string>& a) {
        vector<int> s;
        for(auto x:a) {
            if(x=="+") s.push_back(s.back()+s[s.size()-2]);
            else if(x=="D") s.push_back(2*s.back());
            else if(x=="C") s.pop_back();
            else s.push_back(stoi(x));
        }
        return accumulate(s.begin(),s.end(),0);
    }
};