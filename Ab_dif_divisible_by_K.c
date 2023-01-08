#include <stdio.h>
int main()
{
     int arr[] = {1, 2, 3, 4};
     int k=2,c=0;
     for (int i = 0; i < 4; i++)
     {
          for (int j = i+1; j < 4; j++)
          {
               if ((arr[j]-arr[i])%k==0)
               {
                    c++;
               }              
          }
     }
     printf("%d",c);    
     return 0;
}