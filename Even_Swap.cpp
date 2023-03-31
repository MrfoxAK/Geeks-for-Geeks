// User function Template for C++

class Solution
{
public:
     void reverseArray(int i, int j, vector<int> &arr)
     {
          sort(arr.begin() + i, arr.begin() + j, greater<int>());
     }
     vector<int> lexicographicallyLargest(vector<int> &A, int n)
     {
          vector<int> a = A;
          int i = 0;
          // keep track of index till where swapping is possible
          while (i < n)
          {
               // sum will be even only if 1) even+even 2) odd+odd
               int j = i + 1;
               while (j < n && ((a[j] % 2 == 0 && a[j - 1] % 2 == 0) || (a[j] % 2 && a[j - 1] % 2)))
                    j++;

               reverseArray(i, j, a);
               i = j;
          }
          return a;
     }
};