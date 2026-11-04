class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        int ans = 0, n = h.size();
        for (int i =0; i <= n; i++) {
            int curr = (i == n) ? 0: h[i];
            while (!st.empty() && h[st.top()] > curr) {
                int height = h[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                ans = max(ans, height * width);
            }
            st.push(i);
        }
        return ans;
    }
};