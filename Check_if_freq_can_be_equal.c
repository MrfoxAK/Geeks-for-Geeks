#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
     int arr[26];
     for (int i = 0; i < 26; i++)
     {
          arr[i] = 0;
     }
     char s[10];
     printf("Enter the Str : ");
     gets(s);
     int i = 0;
     while (s[i]!='\0')
     {
          arr[s[i]-97] += 1;
          i++;
     }
     int min=INT_MAX,max=INT_MIN;
     for (int i = 0; i < 26; i++)
     {
          if (arr[i]>max)
          {
               max = arr[i];
          }
          if (arr[i]<min && arr[i] != 0)
          {
               min = arr[i];
          }
     }
     if((max-min)>1){
          printf("Not Possible");
     }
     else{
          printf("Possible");
     }
     return 0;
}