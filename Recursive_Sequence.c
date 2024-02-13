#include <stdio.h>
int main()
{
     int n = 7;
     int i = 1;
     static int f = 1;
     long long int now = 0;
     long long int total = 0;
     // printf("%d",a);
     while (i<=n)
     {
          now = 1;
          for (int j = 1; j <= i; j++)
          {
               now *= f;
               f++;
          }
          total = (total + now)%1000000007;
          i++;
     }
     printf("now f is %d\n",total);
     return 0;
}