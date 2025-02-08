// https://www.geeksforgeeks.org/problems/number-of-provinces/1
class Solution
{
public:
    void dfs(int node, vector<vector<int>> &adj, vector<int> &vis)
    {
        if (vis[node] == 1)
        {
            return;
        }

        vis[node] = 1;

        for (int j = 0; j < adj[node].size(); j++)
        {
            if (adj[node][j] == 1)
            {
                // there is a path between node and j
                if (vis[j] == 0)
                {
                    // j has not been already visited
                    dfs(j, adj, vis);
                }
            }
        }
        return;
    }

    int numProvinces(vector<vector<int>> adj, int V)
    {
        // code here
        int ans = 0;
        int n = adj.size();

        vector<int> visited(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 0)
            {
                dfs(i, adj, visited);
                ans++;
            }
        }
        return ans;
    }
};