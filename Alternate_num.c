#include <stdio.h>
int main()
{
     int poscount=0,negcount=0;
     int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
     for (int i = 0; i < 9; i++)
     {
          if (arr[i]>=0)
          {
               poscount++;
          }
          else
          {
               negcount++;
          }
     }
     // printf("%d %d",poscount,negcount);
     int arrpos[poscount],arrneg[negcount];
     int j=0,k=0;
     for (int i = 0; i < 9; i++)
     {
          if (arr[i]>=0)
          {
               arrpos[j]=arr[i];
               j++;
          }
          else
          {
               arrneg[k]=arr[i];
               k++;
          }
     }
     // printf("Pos is\n");
     // for (int i = 0; i < poscount; i++)
     // {
     //      printf("%d ",arrpos[i]);
     // }
     // printf("neg is\n");
     // for (int i = 0; i < negcount; i++)
     // {
     //      printf("%d ",arrneg[i]);
     // }
     j=0,k=0;
     for (int i = 0; i < 9; i=i+2)
     {
          arr[i] = arrpos[j];
          j++;
     }
     for (int i = 1; i < 9; i=i+2)
     {
          arr[i] = arrneg[k];
          k++;
     }
     printf("Output is : \n");
     for (int i = 0; i < 9; i++)
     {
          printf("%d ",arr[i]);
     }
     
     return 0;
}