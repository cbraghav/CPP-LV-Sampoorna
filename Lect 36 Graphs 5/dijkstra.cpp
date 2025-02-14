vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src)
{
    // Code here

    // priority_queue<int> ;
    // priority_queue<pair<int,int>> pq; // desc
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // ascending {dis, node}
    int n = adj.size();
    vector<int> dis(n, 1e7);
    dis[src] = 0;
    pq.push({0, src});

    while (pq.size())
    {
        int currdis = pq.top().first;
        int currnode = pq.top().second;
        pq.pop();

        // visit neigh

        for (auto neigh : adj[currnode])
        {

            int weight = neigh.second;
            int node = neigh.first;
            if (currdis + weight < dis[node])
            {
                dis[node] = currdis + weight;
                pq.push({currdis + weight, node});
            }
        }
    }

    return dis;
}