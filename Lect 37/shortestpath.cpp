int shortestPathBinaryMatrix(vector<vector<int>> &grid)
{
    // egde cases
    int n = grid.size();

    if (grid[0][0] == 1 or grid[n - 1][n - 1] == 1)
    {
        return -1;
    }

    queue<vector<int>> q; // {i , j , count}
    q.push({0, 0, 1});
    vector<vector<int>> vis(n, vector<int>(n, -1));
    vis[0][0] = 1;

    while (q.size())
    {
        vector<int> v = q.front();
        q.pop();
        int r = v[0];
        int c = v[1];
        int dis = v[2];

        if (r == n - 1 and c == n - 1)
        {
            return dis;
        }
        // visit neigh
        int dirx[] = {-1, -1, 0, 0, -1, 1, 1, 1};
        int diry[] = {-1, 1, -1, 1, 0, -1, 0, 1};
        for (int i = 0; i < 8; i++)
        {
            int nr = r + dirx[i];
            int nc = c + diry[i];

            if (nr >= 0 and nr < n and nc >= 0 and nc < n and vis[nr][nc] == -1 and grid[nr][nc] == 0)
            {
                vis[nr][nc] = 1;
                q.push({nr, nc, dis + 1});
            }
        }
    }
    return -1;
}