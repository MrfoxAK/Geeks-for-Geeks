// User function Template for C++

class Solution
{
public:
     int maxLength(string &str)
     {
          // code here
          int n = str.size();
          stack<int> st;
          int ans = 0;
          for (int i = 0; i < n; i++)
          {
               if (str[i] == '(')
               {
                    st.push(i);
               }
               else
               {
                    if (!st.empty() && str[st.top()] == '(')
                    {
                         st.pop();
                         int first = st.empty() ? -1 : st.top();
                         ans = max(ans, i - first);
                    }
                    else
                    {
                         st.push(i);
                    }
               }
          }
          return ans;
     }
};