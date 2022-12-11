#include <stdio.h>
int main()
{
     int arr[] = {9, 5, 7, 3};
     int k = 6;
     for (int i = 0; i < 4; i++)
     {
          for (int j = i+1; j < 4; j++)
          {
               if ((arr[i] + arr[j]) % k == 0)
               {
                    printf("%d,%d\n",arr[i],arr[j]);
               }
          }
     }
     return 0;
}