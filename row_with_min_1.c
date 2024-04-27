#include <stdio.h>
#define n 4
#define m 4

int main()
{
     int mat[n][m];
     int total_1_in_a_row = 0;
     int min_index = 0;
     int min_1_in_a_row = 110;
     // taking input
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               printf("Enter at %d,%d : ",i,j);
               scanf("%d",&mat[i][j]);
          }
     }
     //Print the matrix 
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               printf("%d ",mat[i][j]);
          }
          printf("\n");
     }
     // main operation
     for (int i = 0; i < n; i++)
     {
          total_1_in_a_row = 0;
          for (int j = 0; j < m; j++)
          {
               if (mat[i][j]==1)
               {
                    total_1_in_a_row += 1;
               }
          }
          // printf("the total no of 1's in %dth row is %d\n",i,total_1_in_a_row);
          if (min_1_in_a_row>total_1_in_a_row)
          {
               min_1_in_a_row = total_1_in_a_row;
               min_index = i;
          }
          else if (min_1_in_a_row == total_1_in_a_row)
          {
               if (min_index > i)
               {
                    continue;
               }
          }
     }
     printf("The min index is %d",min_index+1);
     return 0;
}