#include <stdio.h>

void insertion(int * arr,int arrsize,int num,int index);
void display(int * arr, int arrsize);

int main()
{
     int num,index;
     int arr[] = {3,5,2,6,9,37,9};
     int arrsize = sizeof(arr)/sizeof(arr[0]);
     display(arr,arrsize);
     printf("\nEnter the index u want to insert: ");
     scanf("%d",&index);
     printf("\nEnter the num u want to insert: ");
     scanf("%d",&num);
     insertion(arr,arrsize,num,index);
     printf("\nAfter insertion........\n");
     arrsize++;
     display(arr,arrsize);
     return 0;
}

void insertion(int * arr,int arrsize,int num,int index){
     for (int i = arrsize; i >= index; i--)
     {
          arr[i+1] = arr[i];
     }
     arr[index] = num;
}

void display(int * arr, int arrsize){
     for (int i = 0; i < arrsize; i++)
     {
          printf("%d ",arr[i]);
     }
}