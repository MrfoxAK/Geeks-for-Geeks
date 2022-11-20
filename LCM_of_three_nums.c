#include <stdio.h>

int main()
{

     int n1, n2, n3, max;

     printf("Enter three positive integers: ");
     scanf("%d %d %d", &n1, &n2, &n3);

     // maximum number between n1 and n2 is stored in max
     if (n1>n2)
     {
          if (n1>n3)
          {
               max = n1;
          }
          else
          {
               max = n3;
          }
     }
     else
     {
          if (n2>n3)
          {
               max = n2;
          }
          else
          {
               max = n3;
          }
     }
     

     while (1)
     {
          if ((max % n1 == 0) && (max % n2 == 0) && (max % n3 == 0))
          {
               printf("The LCM of %d and %d and %d is %d.", n1, n2, n3, max);
               break;
          }
          ++max;
     }
     return 0;
}

// #include <stdio.h>
// int main()
// {
//      int N = 45;
//      int N2 = 75;
//      int N3 = 60;
//      int LCM=1;
//      int i = 2;
//      while (i<9)
//      {
//           if (N % i == 0 && N2 % i == 0 && N3 % i == 0)
//           {
//                LCM = LCM * i;
//                N = N/i;
//                N2 = N2/i;
//                N3 = N3/i;
//                printf("The i is %d\n",i);
//                i=0;
//           }
//           else if (N % i == 0 && N2 % i == 0 && N3 % i != 0)
//           {
//                LCM = LCM * i;
//                N = N/i;
//                N2 = N2/i;
//                printf("The i is %d\n",i);
//           }
//           else if (N % i == 0 && N2 % i != 0 && N3 % i == 0)
//           {
//                LCM = LCM * i;
//                N = N/i;
//                N3 = N3/i;
//                printf("The i is %d\n",i);
//           }
//           else if (N % i != 0 && N2 % i == 0 && N3 % i == 0)
//           {
//                LCM = LCM * i;
//                N2 = N2/i;
//                N3 = N3/i;
//                printf("The i is %d\n",i);
//           }
//           else
//           {
//                LCM = LCM*N*N2*N3;
//           }
//      }
//      printf("The LCM is %d",LCM);
//      return 0;
// }