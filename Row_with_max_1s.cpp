// User function template for C++
class Solution
{
public:
     int rowWithMax1s(vector<vector<int>> &arr)
     {
          // code here
          int maxOnesIndx = -1;
          int maxOnes = 0;
          int n = arr.size(), m = arr[0].size();
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    if (arr[i][j] == 1)
                    {
                         int ones = m - j;
                         if (ones > maxOnes)
                         {
                              maxOnes = ones;
                              maxOnesIndx = i;
                         }
                         break;
                    }
               }
          }
          return maxOnesIndx;
     }
};