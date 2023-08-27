#include <stdio.h>
#include <string.h>

char * rev_str(char * s){
     int Slen = strlen(s);
     int i = 0;
     char t;
     // printf("%c",*(s+i));
     while (i<Slen/2)
     {
          t = *(s+i);
          *(s+i) = *(s+Slen-i-1);
          *(s+Slen-i-1) = t;
          i++;
     }
     return s;
}

int main()
{
     char str[100];
     printf("Enter the str : ");
     gets(str);
     printf("The str is : ");
     puts(str);
     char * rs = rev_str(str);
     printf("The rev str is : ");
     puts(rs);
     return 0;
}