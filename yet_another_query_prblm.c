#include <stdio.h>

int count(int arr[],int low,int high,int key){
     int count=0;
     for (int i = low; i < high; i++)
     {
          if (arr[i]==key)
          {
               count++;
          }
     }
     return count;
}

int main()
{
     int N=5,num=3;
     int a[] = {1,1,3,4,3};
     int q[3][3] = {{0,2,2},{0,2,1},{0,4,2}};
     int qr[3];
     int max,min;
     // int j = 0;
     int l,r,k,c=0,x=0;
     for (int i = 0; i < 3; i++)
     {
          l = q[i][0];
          r = q[i][1];
          k = q[i][2];
          c=0;
          for (int j = l; j <= r; j++)
          {
               printf("%d = %d\n",a[j],count(a,j,N,a[j]));
               if (count(a,j,N,a[j])==k)
               {
                    c++;
               }
          }
          printf("for pass %d c is %d\n",i,c);
          qr[x] = c;
          x++;
     }
     for (int i = 0; i < 3; i++)
     {
          printf("%d ",qr[i]);
     }
     return 0;
}