#include <stdio.h>
int main()
{
     int s = 9;
     int d = 2;
     int l=1;
     int sum=0;
     for (int i = 0; i < d; i++)
     {
          l = l*10;
     }
     l = l-1;
     // printf("%d",l);
     int n = s;
     int r;
     int c=0;
     int ans;
     for (int j = l; j > 0; j--)
     {
          sum=0;
          n=j;
          r=0;
          c=0;
          while(n!=0)
          {
               c++;
               r = n%10;
               sum+=r;
               n = n/10;
          }
          // printf("%d ",c);
          // printf("%d\n",j);
          if (sum==s && c==d)
          {
               ans = j;
               printf("%d\n",ans);
               // break;
          }
     }
     return 0;
}