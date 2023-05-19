// User function Template for C++

class Solution
{
public:
     vector<int> kthSmallestNum(int n, vector<vector<int>> &range, int q, vector<int> queries)
     {
          // Write your code here
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
          for (auto it : range)
          {
               pq.push({it[0], it[1]});
          }

          vector<pair<int, int>> v;
          while (pq.size() > 1)
          {
               auto it = pq.top();
               pq.pop();
               auto it1 = pq.top();
               pq.pop();

               if (it.second >= it1.first)
               {
                    pq.push({it.first, max(it1.second, it.second)});
               }
               else
               {
                    pq.push(it1);
                    v.push_back({it});
               }
          }

          v.push_back(pq.top());

          vector<int> ans;

          for (int i = 0; i < queries.size(); i++)
          {
               for (auto it : v)
               {
                    int low = it.first;
                    int high = it.second;
                    int size = high - low + 1;

                    if (size >= queries[i])
                    {
                         ans.push_back(low + queries[i] - 1);
                         break;
                    }
                    else
                         queries[i] -= size;
               }
               if (ans.size() == i)
                    ans.push_back(-1);
          }

          return ans;
     }
};