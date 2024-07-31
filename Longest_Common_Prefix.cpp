// User function template for C++

class Solution
{
public:
     string longestCommonPrefix(vector<string> arr)
     {
          // your code here
          string ans = arr[0];
          for (int i = 1; i < arr.size(); i++)
          {
               string temp = "";
               for (int j = 0; j < min(arr[i].size(), ans.size()); j++)
               {
                    if (arr[i][j] == ans[j])
                         temp += ans[j];
                    else
                         break;
               }
               ans = temp;
          }
          if (ans.size() != 0)
               return ans;
          else
               return "-1";
     }
};