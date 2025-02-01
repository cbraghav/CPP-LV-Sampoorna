class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int maxtime = 0;
        // operation

        queue<pair<int, int>> q; // {{corrd} ,level}

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({i, j});
                }
            }
        }

        // check

        int level = 0;
        while (q.size() != 0)
        {
            int sz = q.size();
            level++;
            for (int k = 0; k < sz; k++)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                // vis kro neigh
                // x-1 y up
                if (x - 1 >= 0 and grid[x - 1][y] == 1)
                {
                    // ye orange sahi h , aur isko sada do
                    grid[x - 1][y] = 2;
                    q.push({x - 1, y});
                }
                // x+1 y down
                if (x + 1 < grid.size() and grid[x + 1][y] == 1)
                {
                    // ye orange sahi h , aur isko sada do
                    grid[x + 1][y] = 2;
                    q.push({x + 1, y});
                }
                // x y-1 left
                if (y - 1 >= 0 and grid[x][y - 1] == 1)
                {
                    // ye orange sahi h , aur isko sada do
                    grid[x][y - 1] = 2;
                    q.push({x, y - 1});
                }
                // x y+1 right
                if (y + 1 < grid[x].size() and grid[x][y + 1] == 1)
                {
                    // ye orange sahi h , aur isko sada do
                    grid[x][y + 1] = 2;
                    q.push({x, y + 1});
                }
            }
        }

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    return -1;
                }
            }
        }
        if (level == 0)
            return 0;
        return level - 1;
    }
};