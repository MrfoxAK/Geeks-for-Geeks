#include <stdio.h>
#include <string.h>
int main()
{
     int ar[26];
     for (int i = 0; i < 26; i++)
     {
          ar[i] = 0;
     }
     char s[40];
     printf("Enter the str: ");
     gets(s);
     int len = strlen(s);
     int i = 0;
     while (s[i]!='\0')
     {
          ar[s[i]-97]++;
          i++;
     }
     int flag = 0;
     for (int i = 0; i < 26; i++)
     {
          if(ar[i] == 0){
               flag = 1;
          }
     }
     if (flag == 0)
          printf("The Sentence is Panagram\n");
     else
          printf("The Sentence is not a Panagram\n");
     return 0;
}