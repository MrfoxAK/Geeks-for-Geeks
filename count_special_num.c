#include <stdio.h>

int count_special_num(int arr[],int n){
     int count=0;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (arr[i]%arr[j]==0 && i!=j)
               {
                    count++;
                    break;
               }
          }
     }
     return count;
}

int main()
{
     int arr[] = {5,5,5,5};
     int n = 4;
     printf("%d",count_special_num(arr,n));
     return 0;
}