// User function Template for C++

class Solution
{
public:
     vector<int> makeBeautiful(vector<int> arr)
     {
          stack<int> st;
          st.push(arr[0]);
          int i = 1;
          while (i < arr.size())
          {
               if (st.empty())
               {
                    st.push(arr[i]);
               }
               else if (st.top() >= 0 && arr[i] >= 0)
               {
                    st.push(arr[i]);
               }
               else if (st.top() < 0 && arr[i] < 0)
               {
                    st.push(arr[i]);
               }
               else if (!st.empty())
               {
                    st.pop();
               }
               i++;
          }

          vector<int> ans;
          while (!st.empty())
          {
               ans.push_back(st.top());
               st.pop();
          }
          reverse(ans.begin(), ans.end());
          return ans;
     }
};