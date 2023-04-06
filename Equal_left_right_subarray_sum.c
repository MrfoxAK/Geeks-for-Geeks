#include <stdio.h>
int main()
{
     int arr[] = {1,3,5,2,2};
     int left_Sum = 0;
     int right_Sum = 0;
     for (int i = 0; i < 5; i++)
     {
          right_Sum += arr[i];
     }
     // printf("%d ",right_Sum);
     for (int i = 0; i < 5; i++)
     {
          right_Sum -= arr[i];
          if (left_Sum==right_Sum)
          {
               printf("%d",i+1);
          }
          left_Sum += arr[i];
     }
     return 0;
}