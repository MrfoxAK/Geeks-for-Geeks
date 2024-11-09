#include <stdio.h>

void selectionSort(int arr[], int n)
{
     for (int i = 0; i < n - 1; i++)
     {
          int min_idx = i;
          for (int j = i + 1; j < n; j++)
          {
               if (arr[j] < arr[min_idx])
               {
                    min_idx = j;
               }
          }
          int temp = arr[min_idx];
          arr[min_idx] = arr[i];
          arr[i] = temp;
     }
}

void reverseArray(int arr[], int n)
{
     int start = 0;
     int end = n - 1;
     while (start < end)
     {
          int temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
          start++;
          end--;
     }
}

int main()
{
     int arr[] = {6, 8, 4, 5, 2, 3};
     int n = sizeof(arr) / sizeof(arr[0]);
     selectionSort(arr, n);
     int num1[3], num2[3];
     int n1=0, n2=0;
     for (int i = 0; i < n; i++)
     {
          if (i%2==0)
          {
               num1[n1] = arr[i];
               n1++;
          }
          else{
               num2[n2] = arr[i];
               n2++;
          }
     }
     reverseArray(num1, 3);
     reverseArray(num2, 3);
     int total[n], t = 0;
     for (int i = 0; i < n; i++)
     {
          total[i] = 0;
     }
     int sum = 0, carry = 0, curr = 0;
     for (int i = 0; i < 3; i++)
     {
          sum = num1[i] + num2[i] + carry;
          if (sum >= 10)
          {
               curr = sum % 10;
               total[t] = curr;
               t++;
               carry = 1;
          }
          else{
               total[t] = sum;
               t++;
               carry = 0;
          }
     }
     reverseArray(total, n);
     int Min_sum = 0;
     for (int i = 0; i < n; i++)
     {
          Min_sum = 10* Min_sum + total[i];
     }
     printf("Minimum Sum: %d", Min_sum);
     return 0;
}