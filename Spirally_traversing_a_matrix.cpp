class Solution
{
public:
     vector<int> spirallyTraverse(vector<vector<int>> &matrix)
     {
          // code here
          int n = matrix.size(), m = matrix[0].size();
          int dxy[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
          bool vis[n + 1][m + 1];
          memset(vis, false, sizeof(vis));
          vector<int> res;
          int i = 0, j = 0, k = 0;
          while (true)
          {
               res.push_back(matrix[i][j]);
               vis[i][j] = true;
               if (res.size() == n * m)
                    break;
               int ni = i + dxy[k % 4][0], nj = j + dxy[k % 4][1];
               if (!(ni >= 0 && ni < n && nj >= 0 && nj < m && !vis[ni][nj]))
                    k++;
               i += dxy[k % 4][0];
               j += dxy[k % 4][1];
          }
          return res;
     }
};