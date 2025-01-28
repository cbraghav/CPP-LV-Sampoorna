class Solution
{
public:
    void dfs(int n, vector<vector<int>> &graph, int curr, vector<bool> &vis)
    {
        if (vis[curr] == true)
        {
            return;
        }

        vis[curr] = true;

        for (int i = 0; i < n; i++)
        {
            // check connection // check neight
            if (graph[curr][i] == 1)
            {
                if (vis[i] == false)
                { // check if already visited
                    dfs(n, graph, i, vis);
                }
            }
        }
        return;
    }

    int findCircleNum(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<bool> vis(n + 1, false);
        int numberof_provinces = 0;

        for (int i = 0; i < n; i++)
        {
            if (vis[i] == false)
            {
                dfs(n, graph, i, vis);
                numberof_provinces++;
            }
        }

        return numberof_provinces;
    }
};