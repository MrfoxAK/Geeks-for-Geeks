#include <stdio.h>
int main()
{
     int arr[] = {10,8,2,1,1,2};
     int n=6;
     int c=0;
     for (int i = 0; i < n/2; i++)
     {
          for (int j = n/2; j < n; j++)
          {
               if(arr[i]>=5*arr[j]){
                    c++;
               }
          }
     }
     printf("%d",c);
     return 0;
}