// This is a brute force solution time complexcity of O(n^3)

#include <stdio.h>

void left_rotate(int a[], int n)
{
     int element = a[0];
     for (int i = 0; i < n; i++)
     {
          a[i] = a[i+1];    
     }
     a[n-1] = element;
}

int max_sum(int a[], int n){
     int curr_sum = 0, max_sum = 0;
     for (int i = 0; i < n; i++)
     {
          left_rotate(a, n);
          curr_sum = 0;
          for (int j = 0; j < n; j++)
          {
               curr_sum += a[j]*j;
          }
          if (curr_sum>max_sum)
          {
               max_sum = curr_sum;
          }
     }
     return max_sum;
}

int main()
{
     int n = 4;
     int a[] = {8, 3, 1, 2};
     printf("The Max Sum is %d\n",max_sum(a, n));
     return 0;
}