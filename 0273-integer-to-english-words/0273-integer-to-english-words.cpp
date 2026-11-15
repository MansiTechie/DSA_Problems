class Solution {
public:
    string numberToWords(int n) {
        if(n==0) return "Zero";

        vector<string> v={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        vector<string> t={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

        function<string(int)> f=[&](int x)->string {
            if(x<20) return v[x];
            if(x<100) return t[x/10]+(x%10?" "+v[x%10]:"");
            return v[x/100]+" Hundred"+(x%100?" "+f(x%100):"");
        };

        vector<string> u={"","Thousand","Million","Billion"};
        string ans="";

        for(int i=0;i<4;i++,n/=1000) {
            int x=n%1000;
            if(x) ans=f(x)+(u[i].empty()?"":" "+u[i])+(ans.empty()?"":" "+ans);
        }
        return ans;
    }
};