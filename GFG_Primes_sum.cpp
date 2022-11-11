class Solution
{
public:
     bool isPrime(int n)

     {

          for (int i = 2; i * i <= n; i++)

          {

               if (n % i == 0)

                    return false;
          }

          return true;
     }

     string isSumOfTwo(int n)
     {

          for (int i = 2; i < n; i++)

          {

               if (isPrime(i) && isPrime(n - i))

                    return "Yes";
          }

          return "No";
     }
};