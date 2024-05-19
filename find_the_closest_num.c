// Time Complexcity - O(n)


#include <stdio.h>
#include <stdlib.h>
int main()
{
     int arr[] = {1, 3, 6, 7};
     int n = 4;
     int k = 4;
     int curr_diff = 0;
     int min = 999;
     int num = 0;
     for (int i = 0; i < n; i++)
     {
          curr_diff = k-arr[i];
          curr_diff = abs(curr_diff);
          if (curr_diff<=min)
          {
               min = curr_diff;
               num = arr[i];
          }
     }
     printf("The Num is %d\n",num);
     return 0;
}