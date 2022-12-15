#include <stdio.h>

int main()
{
     int n;
     printf("Enter n: ");
     scanf("%d", &n);
     int sum_of_digits = 0;
     int copyn = n;
     char str[100];
     int i, j = n / 2;
     if (n % 2 == 0)
     {
          for (i = 0; i < n / 2; i++)
          {
               str[i] = 97 + i;
          }
          while (i != n)
          {
               str[i] = 123 - j;
               j--;
               i++;
          }
          str[i] = '\0';
     }
     else
     {
          while (copyn)
          {
               sum_of_digits = sum_of_digits + (copyn % 10);
               copyn /= 10;
          }
          printf("The sum of digits is %d\n", sum_of_digits);
          if (sum_of_digits % 2 == 0)
          {
               for (i = 0; i < (n + 1) / 2; i++)
               {
                    str[i] = 97 + i;
               }
               while (i != n)
               {
                    str[i] = 123 - j;
                    j--;
                    i++;
               }
               str[i] = '\0';
          }
          else if (sum_of_digits % 2 != 0)
          {
               for (i = 0; i < (n-1) / 2; i++)
               {
                    str[i] = 97 + i;
               }
               j=(n+1)/2;
               while (i != n)
               {
                    str[i] = 123 - j;
                    j--;
                    i++;
               }
               str[i] = '\0';
          }
     }
     printf("%s", str);
     return 0;
}