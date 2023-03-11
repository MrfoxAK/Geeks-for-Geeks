#include <stdio.h>
#include <string.h>

int main()
{
     int count[50], max = 0;
     char s[50];
     printf("Enter a string : ");
     gets(s);
     int len = strlen(s);
     // Initializes frequency of all characters to 0
     for (int i = 0; i < len; i++)
     {
          count[i] = 1;
     }
     // Finds frequency of each characters
     for (int i = 0; i < len; i++)
     {
          for (int j = i + 1; j < len; j++)
          {
               if (s[i] == s[j])
               {
                    count[i]++;
               }
          }
     }
     // Finds maximum frequency
     int k;
     for (k = 0; k < len; k++)
     {
          if (count[k] < count[max])
          {
               max = k;
          }
     }
     printf("Maximum occurring character is '%c' = %d times.", s[max], count[max]);
     return 0;
}