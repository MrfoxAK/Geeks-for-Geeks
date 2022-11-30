#include <stdio.h>

void rearrange(int arr[],int n){
     for (int i = 0; i < n;)
     {
          for (int j = n; j > i; j--)
          {
               arr[j] = arr[j-1];
          }
          arr[i] = arr[n];
          i+=2;
     }
}

void printf_array(int arr[],int n){
     for (int i = 0; i < n; i++)
     {
          printf("%d ",arr[i]);
     }
}

int main()
{
     int arr[] = {10,20,30,40,50,60,70,80,90,100,110};
     printf_array(arr,11);
     rearrange(arr,11);
     printf("\n");
     printf_array(arr,11);
     return 0;
}