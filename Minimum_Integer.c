#include <stdio.h>

void sort(int arr[],int N){
     int temp;
     for (int i = 0; i < N; i++)
     {
          for (int j = 0; j < N; j++)
          {
               if (arr[j]>arr[j+1])
               {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
               }    
          }
     }
}

int Min_int(int arr[],int N){
     int sum=0;
     for (int i = 0; i < N; i++)
     {
          sum+=arr[i];
     }
     for (int i = 0; i < N; i++)
     {
          if (sum<=(arr[i]*N))
          {
               return arr[i];
          }
     }
}

int main()
{
     int arr[] = {1,3,2};
     int N = 3;
     for (int i = 0; i < N; i++)
     {
          printf("%d ",arr[i]);
     }
     sort(arr,N);
     printf("\nAfter sorting.....\n");
     for (int i = 0; i < N; i++)
     {
          printf("%d ",arr[i]);
     }
     printf("\nThe Min int is = ");
     printf("%d ",Min_int(arr,N));
     return 0;
}