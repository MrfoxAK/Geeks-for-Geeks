

class Solution
{
public:
     int dfshelper(int src, vector<vector<int>> &adj, bool *visited, int &ans)
     {
          int count = 1;
          visited[src] = true;
          for (auto nbr : adj[src])
          {
               if (!visited[nbr])
               {
                    int subtree_count = dfshelper(nbr, adj, visited, ans);
                    if (subtree_count % 2 == 0)
                    {
                         ans++;
                    }
                    else
                    {
                         count += subtree_count;
                    }
               }
          }
          return count;
     }

     int minimumEdgeRemove(int n, vector<vector<int>> &edges)
     {
          vector<vector<int>> adj(n);
          bool *visited = new bool[n]{false};

          for (const auto &edge : edges)
          {
               adj[edge[0] - 1].push_back(edge[1] - 1);
               adj[edge[1] - 1].push_back(edge[0] - 1);
          }

          int ans = 0;
          dfshelper(0, adj, visited, ans);
          return ans;
     }
};