#include <stdio.h>

int max(int arr[],int start, int size){
     int max=0;
     for (int i = start; i <= size; i++)
     {
          if (max<arr[i])
          {
               max = arr[i];
          }
     }
     return max;
}

int main()
{
     int count=0,k=1,j=0;
     int arr[] = {1, 2, 3, 4};
     for (int i = 0; i < 4; i++)
     {
          if (arr[i]>k)
          {
               count++;
          }
          j=i+1;
          while (j<4)
          {
               int maxi = max(arr,i,j);
               if (maxi>k)
               {
                    count++;
                    j++;
               }
               else
               {
                    break;
               }
          }
     }
     printf("The total count is %d",count);
     return 0;
}