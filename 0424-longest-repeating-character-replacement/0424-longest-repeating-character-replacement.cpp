class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {}, l = 0, mx = 0, ans = 0;
        for (int r = 0; r < s.size(); r++) {
            mx = max(mx, ++freq[s[r]-'A']);
            while (r-l+1-mx > k)
                freq[s[l++]-'A']--;
            ans = max(ans, r-l+1);
        }
        return ans;
    }

};