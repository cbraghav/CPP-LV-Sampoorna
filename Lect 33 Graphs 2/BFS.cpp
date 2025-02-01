#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], int n, vector<bool> &vis, int source)
{
    if (vis[source] == 1)
    {
        return;
    }

    vis[source] = 1;
    queue<pair<int, int>> q; // node , level
    q.push({source, 0});
    // q.push({source1,0});

    while (q.size() != 0)
    {
        int node = q.front().first;
        int level = q.front().second;
        q.pop();

        // process curr node
        cout << node << " " << level << endl;
        ;

        // visting neigh
        for (auto neigh : adj[node])
        {
            // if the neigh is already visited , then skip
            if (vis[neigh] == 0)
            {
                vis[neigh] = 1;
                q.push({neigh, level + 1});
            }
        }
    }

    return;
}

// adj list
int main()
{

    int n;
    cin >> n;
    int edges;
    cin >> edges;

    // unweighted
    vector<int> adjlist[n + 1];

    // weighted
    // vector<pair<int, int>> adjlist[n + 1];
    // [0] -> {  {neig1, val} , { neig2, val}  }

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v;

        // u -> from
        // v -> to
        // w -> weight/cost

        // case 1 : unweighted undirected
        // adjlist[u].push_back(v);
        // adjlist[v].push_back(u);

        // case 2: unweighted directed
        adjlist[u].push_back(v);

        // case 3: weighted undirected
        // adjlist[u].push_back({v, w});
        // adjlist[v].push_back({u, w});

        // // case 4: weighted directed
        // adjlist[u].push_back({v, w});
    }

    vector<bool> visited(n + 1, false);

    int numberof_connected_comp = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (visited[i] == false)
        {
            bfs(adjlist, n, visited, i);
            numberof_connected_comp++;
        }
    }

    cout << "total number of compoonents are " << numberof_connected_comp << endl;

    // dfs(adjlist, n, visited, 2);
}