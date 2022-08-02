#include <stdio.h>

void deletion(int * arr,int arrsize,int index);
void display(int * arr, int arrsize);

int main()
{
     int index;
     int arr[] = {3,5,2,6,9,37,9};
     int arrsize = sizeof(arr)/sizeof(arr[0]);
     display(arr,arrsize);
     printf("\nEnter the index u want to deletion: ");
     scanf("%d",&index);
     deletion(arr,arrsize,index);
     printf("\nAfter deletion........\n");
     arrsize--;
     display(arr,arrsize);
     return 0;
}

void deletion(int * arr,int arrsize,int index){
     for (int i = index; i < arrsize-1; i++)
     {
          arr[i] = arr[i+1];
     }
}

void display(int * arr, int arrsize){
     for (int i = 0; i < arrsize; i++)
     {
          printf("%d ",arr[i]);
     }
}