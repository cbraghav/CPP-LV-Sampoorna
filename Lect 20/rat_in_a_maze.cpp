#include <bits/stdc++.h>
using namespace std;

// void solve(vector<vector<int>> &v, string &ans, int i, int j, vector<vector<int>> &vis, int n, int m)
// {
//     if (i == n - 1 and j == m - 1)
//     {
//         cout << ans << endl;
//         return;
//     }

//     int ni, nj;
//     // Go left
//     ni = i, nj = j - 1;
//     if (ni >= 0 and ni < n and nj >= 0 and nj < m and v[ni][nj] == 0 and vis[ni][nj] == 0)
//     {
//         vis[i][j] = 1;
//         ans.push_back('L');
//         solve(v, ans, ni, nj, vis, n, m);
//         ans.pop_back();
//         vis[i][j] = 0;
//     }
//     // go right

//     ni = i, nj = j + 1;
//     if (ni >= 0 and ni < n and nj >= 0 and nj < m and v[ni][nj] == 0 and vis[ni][nj] == 0)
//     {
//         vis[i][j] = 1;
//         ans.push_back('R');
//         solve(v, ans, ni, nj, vis, n, m);
//         ans.pop_back();
//         vis[i][j] = 0;
//     }
//     // go up
//     ni = i - 1, nj = j;
//     if (ni >= 0 and ni < n and nj >= 0 and nj < m and v[ni][nj] == 0 and vis[ni][nj] == 0)
//     {
//         vis[i][j] = 1;
//         ans.push_back('U');
//         solve(v, ans, ni, nj, vis, n, m);
//         ans.pop_back();
//         vis[i][j] = 0;
//     }
//     // go down
//     ni = i + 1, nj = j;
//     if (ni >= 0 and ni < n and nj >= 0 and nj < m and v[ni][nj] == 0 and vis[ni][nj] == 0)
//     {
//         vis[i][j] = 1;
//         ans.push_back('D');
//         solve(v, ans, ni, nj, vis, n, m);
//         vis[i][j] = 0;
//         ans.pop_back();
//     }
// }

void solve(vector<vector<int>> &v, string &ans, int i, int j, vector<vector<int>> &vis, int n, int m)
{
    if (i == n - 1 and j == m - 1)
    {
        cout << ans << endl;
        return;
    }

    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};
    string ds = "LRUD";

    for (int k = 0; i < 4; k++)
    {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (ni >= 0 and ni < n and nj >= 0 and nj < m and v[ni][nj] == 0 and vis[ni][nj] == 0)
        {
            vis[i][j] = 1;
            ans.push_back(ds[k]);
            solve(v, ans, ni, nj, vis, n, m);
            vis[i][j] = 0;
            ans.pop_back();
        }
    }
}

int main()
{
    vector<vector<int>> v = {{0, 1, 0, 0, 1},
                             {0, 0, 1, 0, 1},
                             {1, 0, 0, 0, 1},
                             {0, 1, 1, 0, 1},
                             {1, 0, 1, 0, 0}};
    int n = v.size(), m = v[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));
    string ans = "";

    solve(v, ans, 0, 0, vis, n, m);
}