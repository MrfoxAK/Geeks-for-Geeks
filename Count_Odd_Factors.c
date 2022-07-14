#include <stdio.h>
int main()
{
     printf("Enter a num: ");
     int n, count, c = 0, arr[50];
     scanf("%d", &n);
     for (int i = 1; i <= n; i++)
     {
          count = 0;
          for (int j = 1; j <= i; j++)
          {
               if (i % j == 0)
               {
                    count++;
               }
          }
          if (count % 2 == 1)
          {
               c++;
          }
     }
     printf("%d", c);

     return 0;
}