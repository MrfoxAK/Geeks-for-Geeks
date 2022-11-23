// User function Template for C++
class Solution
{
public:
     long long int maxSumLCM(int n)
     {
          // code
          long long int ans = 0;
          for (long long int i = 1; i * i <= n; i++)
          {
               if (n % i == 0)
               {
                    ans += i;
                    long long int temp = n / i;
                    if (temp != i)
                         ans += temp;
               }
          }
          return ans;
     }
};