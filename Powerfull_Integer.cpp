#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define n 2
#define m 4
#define k 2

int findMax(int mat[n][m])
{
     int maxElement = INT_MIN;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               if (mat[i][j] > maxElement)
               {
                    maxElement = mat[i][j];
               }
          }
     }
     return maxElement;
}

int main()
{
     int arr[n][m];
     cout << "Enter the matrix : ";
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cout << "Enter at " << i << "," << j << " ";
               cin >> arr[i][j];
          }
     }
     int max = findMax(arr);
     int freq[max + 1];
     for (int i = 0; i < max + 1; i++)
     {
          freq[i] = 0;
     }
     for (int i = 0; i < max + 1; i++)
     {
          cout << freq[i] << " ";
     }
     cout << "\n";
     // for calculation
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               freq[arr[i][j]]++;
          }
     }
     for (int i = 0; i < max + 1; i++)
     {
          cout << freq[i] << " ";
     }
     cout << "\n";
     // for display
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cout << arr[i][j] << " ";
          }
          cout << "\n";
     }
     // vector part
     vector<int> f;
     for (int i = 0; i < max + 1; i++)
     {
          if (freq[i] >= k)
               f.push_back(i);
     }
     if (f.empty())
     {
          f.push_back(-1);
     }
     cout << "So The vec : ";
     for (auto i = f.begin(); i != f.end(); ++i)
          cout << *i << " ";
     cout << "\nPower Integer is = "
          << *max_element(f.begin(), f.end());
     return 0;
}