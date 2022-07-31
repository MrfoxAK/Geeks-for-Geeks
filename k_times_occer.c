#include <stdio.h>
int main()
{
     int a[] = {1,4,5,4,6,7};
     int arrSize = sizeof(a)/sizeof(a[0]);
     int f[arrSize];
     for (int i = 0; i < arrSize; i++)
     {
          f[i] = 0;
     }
     for (int i = 0; i < arrSize; i++)
     {
          for (int j = i+1; j < arrSize; j++)
          {
               if (a[i]==a[j])
               {
                    f[i]++;
               }
          }
          if (f[i]==1)
          {
               printf("%d",a[i]);
          }
     }
     // for (int i = 0; i < arrSize; i++)
     // {
     // }
     return 0;
}