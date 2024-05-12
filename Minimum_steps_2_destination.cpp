// User function Template for C++

class Solution
{
public:
     int minSteps(int d, int i = 0, int j = 0)
     {
          if (i - d >= 0 && (i - d) % 2 == 0)
          {
               return j;
          }
          j++;
          return minSteps(d, i + j, j);
     }
};