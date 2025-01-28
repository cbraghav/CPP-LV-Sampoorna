

#include <bits/stdc++.h>

using namespace std;

int adjecency_matrix()
{

    int n;
    cin >> n;
    int edges;
    cin >> edges;

    vector<vector<int>> adjmatrix(n + 1, vector<int>(n + 1, -1));
    // undirected
    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjmatrix[u][v] = w;
        // adjmatrix[v][u] = w;
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << adjmatrix[i][j] << " ";
        }
        cout << endl;
    }
}

void dfs(vector<int> adj[], int n, vector<bool> &vis, int curr)
{
    if (vis[curr] == true)
    {
        return;
    }

    cout << curr << " ";
    vis[curr] = true;
    // travel across neigh
    for (auto neig : adj[curr])
    {
        if (vis[neig] == false)
        {
            dfs(adj, n, vis, neig);
        }
    }
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
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);

        // case 2: unweighted directed
        // adjlist[u].push_back(v);

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
            dfs(adjlist, n, visited, i);
            numberof_connected_comp++;
        }
    }

    cout << "total number of compoonents are " << numberof_connected_comp << endl;

    // dfs(adjlist, n, visited, 2);
}