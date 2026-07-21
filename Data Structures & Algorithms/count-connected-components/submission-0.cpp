class Solution {
public:
    void dfs(int src,vector<vector<int>>&adj,vector<bool>&visited){
        visited[src] = true;

        for (auto nbr:adj[src]){
            if (!visited[nbr]){
                dfs(nbr,adj,visited);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for (auto edge:edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);;
            adj[v].push_back(u);
        }
        int cnt = 0;
        vector<bool>visited(n,false);
        for (int i = 0;i<n;i++){
            if (!visited[i]){
                dfs(i,adj,visited);
                cnt++;
            }
        }
        return cnt;
    }
};
