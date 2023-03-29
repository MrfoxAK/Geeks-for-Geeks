#include <stdio.h>
#include <string.h>

int isUpper(char c){
     int ascii = (int)c;
     if (ascii >= 65 && ascii <=90)
     {
          return 1;
     }
     else{
          return 0;
     }
}

int isLower(char c){
     int ascii = (int)c;
     if (ascii >= 97 && ascii <=122)
     {
          return 1;
     }
     else{
          return 0;
     }
}

int match(char s[],int start,int end){
     int cu=0,cl=0;
     for (int i = start; i <= end; i++)
     {
          if (isLower(s[i]))
          {
               cl++;
          }
          else if(isUpper(s[i])){
               cu++;
          }
     }
     if (cl==cu)
     {
          return 1;
     }
     else{
          return 0;
     }
}

int countSubString(char s[],int len){
     int count_lower=0,count_upper=0,j;
     for (int i = 0; i < len; i++)
     {
          for ( j = i; j < len; j++)
          {
               if(match(s,i,j)){
                    printf("(%d,%d)",i,j);
               }
          }
     }
}

int main()
{
     char s[] = "gEEk";
     int len = strlen(s);
     countSubString(s,len);
     // printf("%d",match(s,3,7));
     return 0;
}