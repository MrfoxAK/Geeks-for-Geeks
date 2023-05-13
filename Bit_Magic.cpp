class Solution
{
public:
     int bitMagic(int n, vector<int> &arr)
     {
          // code here
          int c = 0;
          for (int i = 0; i < n / 2; i++)
          {
               if (arr[i] != arr[n - i - 1])
               {
                    c++;
               }
          }
          return (c + 1) / 2; // c/2+c%2;odd length of array adds 1
     }
};