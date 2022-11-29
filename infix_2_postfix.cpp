class Solution
{
public:
     // Function to convert an infix expression to a postfix expression.
     int operatorPrecedence(char op)
     {
          if (op == '^')
               return 3;
          else if (op == '*' || op == '/')
               return 2;
          else if (op == '+' || op == '-')
               return 1;
          else
               return -1;
     }
     // Function to convert an infix expression to a postfix expression.
     string infixToPostfix(const string &s)
     {
          // Your code here
          if (s == "")
               return "";

          string res = "";
          int len = s.length();
          stack<char> sc;
          sc.push('N');

          for (int i = 0; i < len; ++i)
          {
               if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                    res += s[i];
               else if (s[i] == '(')
                    sc.push(s[i]);
               else if (s[i] == ')')
               {
                    while (sc.top() != 'N' && sc.top() != '(')
                    {
                         res += sc.top();
                         sc.pop();
                    }
                    if (sc.top() == '(')
                         sc.pop();
               }
               else
               {
                    while (sc.top() != 'N' &&
                           operatorPrecedence(s[i]) <= operatorPrecedence(sc.top()))
                    {
                         res += sc.top();
                         sc.pop();
                    }
                    sc.push(s[i]);
               }
          }

          while (sc.top() != 'N')
          {
               res += sc.top();
               sc.pop();
          }

          return res;
     }
};