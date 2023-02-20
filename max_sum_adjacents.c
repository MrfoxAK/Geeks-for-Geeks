#include <stdio.h>

int max_index(int arr[],int start,int end){
     int max=arr[0];
     int max_index=start;
     for (int i = start; i <= end; i++)
     {
          if (arr[i]>max)
          {
               max = arr[i];
               max_index=i;
          }
     }
     return max_index;
}

int max(int arr[],int start,int end){
     int max=arr[0];
     int max_index=start;
     for (int i = start; i <= end; i++)
     {
          if (arr[i]>max)
          {
               max = arr[i];
               max_index=i;
          }
     }
     return max;
}

int find_sum_max(int arr[],int start,int end){
     int size=end-start;
     int sum_max=0;
     // printf("%d\n",size);
     int maxindex = max_index(arr,start,end);
     int mx = max(arr,start,end);
     if (size==0 || size<1)
     {
          return 0;
     }
     else{
          return sum_max + mx + find_sum_max(arr,start,maxindex-2) + find_sum_max(arr,maxindex+2,end);
     }
}

int main()
{
     int arr[] = {5, 5, 10, 100, 10, 5};
     int start = 0;
     int end = 6;
     // printf("The max index is %d\n",max(arr,size));
     int fnd_sm_mx = find_sum_max(arr,start,end);
     printf("The sum is %d\n",fnd_sm_mx);
     // printf("The mx is %d\n",max(arr,0,0));
     // printf("The mi is %d\n",max_index(arr,0,0));
     return 0;
}