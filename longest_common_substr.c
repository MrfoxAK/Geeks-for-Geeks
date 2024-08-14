#include <stdio.h>
int main()
{
     char str1[] = "ABCDGH";
     char str2[] = "ACDGHR";
     int n = 3;
     int k,z;
     int count=0,max=0;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (str1[i] == str2[j])
               {
                    count = 0;
                    k = i;
                    z = j;
                    while (str1[k] == str2[z])
                    {
                         k++;
                         z++;
                         count++;
                    }
               }
          }
          if (count > max)
          {
               max = count;
          }
     }
     printf("%d",max);
     return 0;
}