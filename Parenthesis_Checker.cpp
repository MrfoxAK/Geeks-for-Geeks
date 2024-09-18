
#include <stack>
#include <string>

class Solution
{
public:
     bool ispar(const std::string &x)
     {
          std::stack<char> st;

          for (char ch : x)
          {
               // If the character is an opening bracket, push it onto the stack
               if (ch == '(' || ch == '{' || ch == '[')
               {
                    st.push(ch);
               }
               // If it's a closing bracket, check the top of the stack
               else
               {
                    // If stack is empty or there's a mismatch, return false
                    if (st.empty() || (ch == ')' && st.top() != '(') ||
                        (ch == '}' && st.top() != '{') ||
                        (ch == ']' && st.top() != '['))
                    {
                         return false;
                    }
                    st.pop(); // Pop the matched opening bracket
               }
          }

          // If the stack is empty, all brackets were balanced
          return st.empty();
     }
};