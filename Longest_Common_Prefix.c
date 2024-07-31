#include <stdio.h>
#include <stdlib.h>
#define r 4
#define c 20

char * longestCommonPrefix(char arr[r][c]){
     char * str;
     str = (char *) malloc(c * sizeof (char)); 
     int k = 0;
     int flag = 0;
     for (int i = 0; i < c; i++)
     {
          char now = arr[0][i];
          flag = 0;
          // printf("now is %c\n",now);
          for (int j = 0; j < r; j++)
          {
               // printf("%c",arr[j][i]);
               if (arr[j][i] != now)
               {
                    flag = 1;
               }
          }
          if (flag == 0)
          {
               *(str+k) = now;
               k++;
          }
     }
     return str;
}

int main()
{
     char arr[r][c] = {"geeksforgeeks", "geeks", "geek","geeker"};
     char * str = longestCommonPrefix(arr);
     printf("%s",str);
     return 0;
}