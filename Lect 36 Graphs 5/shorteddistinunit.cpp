vector<int> shortestPath(vector<vector<int>> &adj, int src)
{
    // code here

    vector<int> dis(adj.size(), 1e9);

    dis[src] = 0;
    queue<int> q;
    q.push(src);
    while (q.size())
    {
        int curr = q.front();
        q.pop();

        // neigh visit
        for (auto neigh : adj[curr])
        {
            if (dis[curr] + 1 < dis[neigh])
            {
                dis[neigh] = dis[curr] + 1;
                q.push(neigh);
            }
            // new dis < dis[neigh]
        }
    }

    for (int i = 0; i < dis.size(); i++)
    {
        if (dis[i] == 1e9)
        {
            dis[i] = -1;
        }
    }
    return dis;
}