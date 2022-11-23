// brute force method
// O(n)^3
#include <stdio.h>
int main()
{
     int arr[] = {3 ,4, 7, 7, 11, 3, 9 ,6 ,8};
     int c=0;
     for (int i = 0; i < 9; i++)
     {
          for (int j = i+1; j < 9; j++)
          {
               for (int z = j+1; z < 9; z++)
               {
                    if (arr[z]>arr[j] && arr[j]>arr[i])
                    {
                         c++;
                         printf("%d,%d,%d\n",arr[i],arr[j],arr[z]);
                    }
               }
          }
     }
     printf("C is %d\n",c);
     return 0;
}