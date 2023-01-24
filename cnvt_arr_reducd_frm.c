#include <stdio.h>
int main()
{
     int temp;
     int arr[] = {5, 10, 40, 30, 20};
     int cp_arr[5];
     for (int i = 0; i < 5; i++)
     {
          printf("%d ",arr[i]);
          cp_arr[i]=arr[i];
     }
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < 5; j++)
          {
               if (arr[j]>arr[i])
               {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
          }
     }
     printf("\nAfter Sort....\n");
     for (int i = 0; i < 5; i++)
     {
          printf("%d ",arr[i]);
     }
     // main part
     int red_arr[5];
     for (int i = 0; i < 5; i++)
     {
          red_arr[i] = i;
     }
     printf("\nAfter redcd....\n");
     for (int i = 0; i < 5; i++)
     {
          printf("%d ",red_arr[i]);
     }
     // swap part
     // cp_arr = 5 10 40 30 20
     // arr = 5 10 20 30 40
     // red_arr = 0 1 2 3 4
     int curr_ele;
     for (int i = 0; i < 5; i++)
     {
          if (arr[i]!=cp_arr[i])
          {
               curr_ele=cp_arr[i];
               for (int j = i; j < 5; j++)
               {
                    if (arr[j]==curr_ele)
                    {
                         temp = red_arr[i];
                         // printf("\nj = %d\n",temp);
                         red_arr[i] = red_arr[j];
                         red_arr[j] = temp;
                    }
               }
          }
     }
     printf("\nAfter redcd & swaped....\n");
     for (int i = 0; i < 5; i++)
     {
          printf("%d ",red_arr[i]);
     }
     return 0;
}