// User function Template for C++
class Solution
{
public:
     int isValid(string str)
     {
          // code here
          int n = str.size();
          int j = 0;
          int cnt = 0;

          int num = 0;

          bool digit = false;

          while (j < n)
          {
               if (str[j] >= '0' && str[j] <= '9')
               {
                    num *= 10;
                    num += (str[j] - '0');
                    digit = true;
               }
               if (str[j] == '0' && j + 1 < n && str[j + 1] != '.' && num == 0)
                    return 0;
               if (num > 255)
                    return 0;
               if (str[j] == '.')
               {
                    cnt++;
                    num = 0;
                    if (digit == false)
                         return 0;
                    digit = false;
               }
               j++;
          }

          if (cnt == 3)
               return 1;
          return 0;
     }
};