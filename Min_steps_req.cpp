#include <iostream>
#include <string>
using namespace std;

int Min_step_req(string s, int len)
{
     int mid;
     int key;
     int i = 0;
     while (!s.empty())
     {
          mid = len / 2;
          int p = mid, q = mid;
          key = s[mid];
          while (1)
          {
               if ((s[p] == key && s[q] == key))
               {
                    p++;
                    q--;
               }
               else if ((s[p] == key && s[q] != key))
               {
                    p++;
               }
               else if ((s[p] != key && s[q] == key))
               {
                    q--;
               }
               else
               {
                    break;
               }
          }
          printf("\n%d,%d\n", q + 1, p - 1);
          s.erase(q + 1, p - q - 1);
          len -= p - q;
          cout << s << endl;
          i++;
          int zod=0;
          if(len==2 && s[zod]!=s[zod+1]){
               s.erase(0,2);
               i+=2;
               return i;
          }
          else if(len==2 && s[zod]==s[zod+1]){
               s.erase(0,2);
               i+=1;
               return i;
          }
     }
     return i;
}

int main()
{
     string s("bbaabbabbabab");
     int len = s.length();
     cout << "The min step req is : " << Min_step_req(s, len) << endl;
     return 0;
}