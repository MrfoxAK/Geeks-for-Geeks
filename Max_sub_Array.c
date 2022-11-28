// Brute force method
#include <stdio.h>

int sum(int arr[],int s,int e){
     int sum1 = 0;
     for (int i = s; i <= e; i++)
     {
          sum1 += arr[i];
     }
     return sum1;
}

int main()
{
     int curr_sum=0,prev_sum=0;
     int i=0,j = 0,k,start=0,end=0;
     int arr[] = {1, 2, 5, -7, 2, 11,1,-1,110};
     while(i<10)
     {
          curr_sum=0;
          j=i;
          while(j<10)
          {
               if (arr[j]<0 || j==9)
               {
                    curr_sum = sum(arr,i,j-1);
                    if (curr_sum>prev_sum)
                    {
                         printf("C is %d\n",curr_sum);
                         printf("P is %d\n",prev_sum);
                         prev_sum = curr_sum;
                         start=i;
                         end=j-1;
                    }
                    break;
               }
               j++;
          }
          i=j+1;
     }
     for (int i = start; i <= end; i++)
     {
          printf("%d ",arr[i]);
     }
     return 0;
}