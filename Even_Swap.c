#include <stdio.h>

void sort(int a[],int s, int e){
     int temp;
     for (int i = s; i < e; i++)
     {
          for (int j = s; j < e; j++)
          {
               if(a[j]<a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
               }
          }
     }
}

int main()
{
     int a[] = {4,6,8,7,3,21,100,98};
     int n = 8;
     int j=0;
     for (int i = 0; i < n;)
     {
          if (a[i]%2==0)
          {
               j=i;
               while (a[j]%2==0 && j<n)
               {
                    j++;
               }
               // printf("%d %d\n",i,j);
               sort(a,i,j-1);
               i=j;
          }
          else
          {
               j=i+1;
               while (a[j]%2==1 && j<n)
               {
                    j++;
               }
               sort(a,i,j-1);
               // printf("%d %d\n",i,j-1);
               i=j;
          }
     }
     for (int k = 0; k < n; k++)
     {
          printf("%d ",a[k]);
     }
     printf("\n");
     return 0;
}