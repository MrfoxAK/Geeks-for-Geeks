#include <stdio.h>
int main()
{
     char s[] = " ab a aa abd abc abdar abdd abde abdab";
     int i = 0, j,index=0;
     int curr_count = 0, prev_max = 0;
     while (s[i] != '\0')
     {
          if (s[i] == ' ')
          {
               i++;
          }
          else
          {
               j = i;
               curr_count = 0;
               while (s[j] != ' ' && s[j] != '\0')
               {
                    curr_count++;
                    j++;
               }
               if (curr_count > prev_max)
               {
                    prev_max = curr_count;
                    index=j;
               }
               i = j;
          }
     }
     printf("%d\n", index-prev_max);
     return 0;
}