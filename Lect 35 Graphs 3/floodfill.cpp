class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int initcolor,
             int finalcolor) {
        if (sr >= 0 and sr < image.size() and sc >= 0 and
            sc < image[sr].size() and image[sr][sc] != initcolor) {
            return;
        }

        image[sr][sc] = finalcolor;

        // visit neigh
        // sr-1 sc
        if (sr - 1 >= 0 and sr - 1 < image.size() and sc >= 0 and
            sc < image[sr - 1].size() and image[sr - 1][sc] == initcolor) {
            // it is a neigh
            dfs(image, sr - 1, sc, initcolor, finalcolor);
        }
        // sr+1 sc
        if (sr + 1 >= 0 and sr + 1 < image.size() and sc >= 0 and
            sc < image[sr + 1].size() and image[sr + 1][sc] == initcolor) {
            // it is a neigh
            dfs(image, sr + 1, sc, initcolor, finalcolor);
        }
        // sr sc-1

        if (sr >= 0 and sr < image.size() and sc - 1 >= 0 and
            sc - 1 < image[sr].size() and image[sr][sc - 1] == initcolor) {
            // it is a neigh
            dfs(image, sr, sc - 1, initcolor, finalcolor);
        }
        // sr sc+1
        if (sr >= 0 and sr < image.size() and sc + 1 >= 0 and
            sc + 1 < image[sr].size() and image[sr][sc + 1] == initcolor) {
            // it is a neigh
            dfs(image, sr, sc + 1, initcolor, finalcolor);
        }
        return;
    }

    void bfs(vector<vector<int>>& image, int sr, int sc, int initcolor,
             int finalcolor) {
        if (sr >= 0 and sr < image.size() and sc >= 0 and
            sc < image[sr].size() and image[sr][sc] != initcolor) {
            return;
        }

        queue<pair<int, int>> q; // i , j

        q.push({sr, sc});
        image[sr][sc] = finalcolor;

        while (q.size()) {
            pair<int, int> p = q.front();
            q.pop();
            int sr = p.first;
            int sc = p.second;
            // visit neigh
            // sr-1 sc
            if (sr - 1 >= 0 and sr - 1 < image.size() and sc >= 0 and
                sc < image[sr - 1].size() and image[sr - 1][sc] == initcolor) {
                // it is a neigh
                // dfs(image, sr-1 , sc , initcolor, finalcolor);
                q.push({sr - 1, sc});
                image[sr - 1][sc] = finalcolor;
            }

            // sr+1 sc
            if (sr + 1 >= 0 and sr + 1 < image.size() and sc >= 0 and
                sc < image[sr + 1].size() and image[sr + 1][sc] == initcolor) {
                // it is a neigh
                q.push({sr + 1, sc});
                image[sr + 1][sc] = finalcolor;
            }
            // sr sc-1

            if (sr >= 0 and sr < image.size() and sc - 1 >= 0 and
                sc - 1 < image[sr].size() and image[sr][sc - 1] == initcolor) {
                // it is a neigh
                q.push({sr, sc - 1});
                image[sr][sc - 1] = finalcolor;
            }
            // sr sc+1
            if (sr >= 0 and sr < image.size() and sc + 1 >= 0 and
                sc + 1 < image[sr].size() and image[sr][sc + 1] == initcolor) {
                // it is a neigh
                q.push({sr, sc + 1});
                image[sr][sc + 1] = finalcolor;
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int initcolor = image[sr][sc];
        if (initcolor == color)
            return image;
        bfs(image, sr, sc, initcolor, color);

        return image;
    }
};