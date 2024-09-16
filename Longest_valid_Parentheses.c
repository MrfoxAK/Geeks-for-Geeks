#include <stdio.h>

int maxLength(char str[], int n)
{
     int curr = 0;
     int max = 0;
     for (int i = 0; i < n; )
     {
          if (str[i] == '(')
          {
               if (str[i+1] == ')')
               {
                    curr+=2;
                    printf("%d\n",curr);
                    i+=2;
               }
               else{
                    curr=0;
                    i+=1;
               }
          }
          else if (str[i]==')')
          {
               curr=0;
               i+=1;
          }
          if (max<curr)
          {
               max = curr;
          }
     }
     return max;
}

int main()
{
     char str[] = ")()())";
     int n = 6;
     printf("The Max Length is : %d\n",maxLength(str, n));
     return 0;
}