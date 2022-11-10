#include <stdio.h>

int check_jumping_num(int num){
     int duplicate_num=num;
     int flag=0;
     int prev_digit,next_digit,curr_digit;
     int i=0;
     while (num)
     {
          if (i==0)
          {
               curr_digit = num%10;
               prev_digit=curr_digit;
               num=num/10;
               next_digit = num%10;
               if (curr_digit-next_digit!=1 && curr_digit-next_digit!=-1)
               {
                    flag=1;
                    return 0;
               }
               else
               {
                    flag=0;
               }
          }
          else
          {
               // printf("p is %d\n",prev_digit);
               curr_digit = num%10;
               // printf("c is %d\n",curr_digit);
               num=num/10;
               // printf("Num Is %d",num);
               next_digit = num%10;
               // printf("n is %d\n",next_digit);
               if (next_digit==0 && num<10)
               {
                    break;
               }
               if (curr_digit-prev_digit!=1 &&  curr_digit-prev_digit!=-1)
               {
                    flag=1;
                    return 0;
               }
               else if (curr_digit-next_digit!=1 &&  curr_digit-next_digit!=-1)
               {
                    flag=1;
                    return 0;
               }
               else
               {
                    flag=0;
               }
               prev_digit=curr_digit;      
          }
          i++;
     }
     if (flag==0)
     {
          return 1;
     }
}

int main()
{
     int x=4343456;
     if (check_jumping_num(x))
     {
          printf("Yes\n");
     }
     else
     {
          printf("No\n");
     }
     return 0;
}