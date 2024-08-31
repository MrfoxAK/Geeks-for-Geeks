class Solution
{
public:
     vector<int> find3Numbers(vector<int> &arr)
     {
          int n = arr.size();
          vector<int> prev_small(n, INT_MAX), nex_big(n, 0);

          for (int i = 1; i < n; i++)
          {
               prev_small[i] = min(prev_small[i - 1], arr[i - 1]);
               nex_big[n - i - 1] = max(nex_big[n - i], arr[n - i]);
          }

          for (int i = 1; i < n - 1; i++)
          {
               int prev = prev_small[i];
               int nex = nex_big[i];

               if (arr[i] > prev && arr[i] < nex)
               {
                    return {prev, arr[i], nex};
               }
          }
          return {};
     }
};