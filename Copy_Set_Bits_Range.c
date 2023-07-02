#include <stdio.h>
#include <math.h>

int decimal_2_binary(int data)
{
     int arr[100];
     int num = data;
     int sum = 0;
     int r, i = 0;
     while (num > 0)
     {
          r = num % 2;
          arr[i] = r;
          i++;
          num = num / 2;
     }
     for (int j = i - 1; j >= 0; j--)
     {
          sum = sum * 10 + arr[j];
     }
     return sum;
}

int rev(int data)
{
     int Num = data, rev_Num = 0, remainder;
     while (Num != 0)
     {
          remainder = Num % 10;
          rev_Num = rev_Num * 10 + remainder;
          Num = Num / 10;
     }
     return rev_Num;
}

int length(int data)
{
     int n = data;
     int count = 0;
     while (n != 0)
     {
          n = n / 10;
          count++;
     }
     return count;
}

int setBit(int bx, int by, int lenx, int leny, int l, int r)
{
     int bxarr[32];
     int byarr[32];
     int num = bx;
     int i = 0, j = 0, r1;
     while (num > 0)
     {
          r1 = num % 10;
          bxarr[i] = r1;
          i++;
          num = num / 10;
     }
     num = by;
     while (num > 0)
     {
          r1 = num % 10;
          byarr[j] = r1;
          j++;
          num = num / 10;
     }
     // for (int k = 0; k < i; k++)
     // {
     //      printf("%d ",bxarr[k]);
     // }
     // printf("\n");
     // for (int k = 0; k < j; k++)
     // {
     //      printf("%d ",byarr[k]);
     // }
     int k = 0;
     int range = r - l + 1;
     while (k < lenx && k < leny && k < range)
     {
          if (bxarr[k] == 1 && byarr[k] == 1)
          {
               bxarr[k] = 1;
          }
          if (bxarr[k] == 1 && byarr[k] == 0)
          {
               bxarr[k] = 1;
          }
          if (bxarr[k] == 0 && byarr[k] == 1)
          {
               bxarr[k] = 1;
          }
          k++;
     }
     // for (int k = 0; k < i; k++)
     // {
     //      printf("%d ",bxarr[k]);
     // }
     int sum = 0;
     for (int z = lenx - 1; z >= 0; z--)
     {
          sum = sum * 10 + bxarr[z];
     }
     return sum;
}

int convert(long long n)
{
     int dec = 0, i = 0, rem;
     while (n != 0)
     {
          rem = n % 10;
          n /= 10;
          dec += rem * pow(2, i);
          ++i;
     }
     return dec;
}

int main()
{
     int x, y;
     int l = 1, r = 5;
     printf("Enter X: ");
     scanf("%d", &x);
     printf("Enter Y: ");
     scanf("%d", &y);
     int binary_of_x = decimal_2_binary(x);
     int binary_of_y = decimal_2_binary(y);
     printf("The binary of x is : %d\n", binary_of_x);
     printf("The binary of y is : %d\n", binary_of_y);
     int len_y = length(binary_of_y);
     int len_x = length(binary_of_x);
     int v = setBit(binary_of_x, binary_of_y, len_x, len_y, l, r);
     // printf("The Binary is : %d", v);
     int New_X = convert(v);
     printf("The New X is : %d\n",New_X);
     return 0;
}