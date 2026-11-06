class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int> adj[n], in(n,0);
        queue<int> q;
        for(auto x : p) {
            adj[x[1]].push_back(x[0]);
            in[x[0]]++;

        }
        for(int i=0; i< n; i++)
            if(!in[i]) q.push(i);
        int count =0;
        while (!q.empty()) {
            int u=q.front();
            q.pop();
            count++;
            for(int v: adj[u])
                if(--in[v] == 0) q.push(v);
        }
        return count == n;
    }
};