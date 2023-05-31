// User function Template for C++

class Solution
{
public:
     int LargButMinFreq(int arr[], int n)
     {
          map<int, int> mp;
          for (int i = 0; i < n; i++)
          {
               mp[arr[i]]++;
          }
          int maxi = INT_MAX;
          int ans = -1;
          for (auto it : mp)
          {
               if (it.second <= maxi)
               {
                    maxi = it.second;
                    ans = it.first;
               }
          }
          return ans;
     }
};