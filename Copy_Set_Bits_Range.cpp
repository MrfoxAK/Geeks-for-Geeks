// User function Template for C++
class Solution
{
public:
     int setSetBit(int x, int y, int l, int r)
     {
          // code here
          vector<int> a, b;
          while (y) // storing y bits as a vector
          {
               b.push_back(y & 1);
               y = y >> 1;
          }

          while (x) // storing x bits as a vector
          {
               a.push_back(x & 1);
               x = x >> 1;
          }
          if (b.size() > a.size())
          {
               while (a.size() != b.size()) // making size of both x & y same
                    a.push_back(0);
          }
          else if (b.size() < a.size()) // making size of both x & y same
          {
               while (b.size() != a.size())
                    b.push_back(0);
          }
          if (r > max(a.size(), b.size())) // if r value greater than size of bits
               r = max(a.size(), b.size());
          for (int i = l - 1; i < r; i++)
          { // copying bits from y to x in the range
               if (b[i] == 1)
                    a[i] = 1;
          }
          int sum = 0;
          for (int i = 0; i < a.size(); i++) // converting to decimal from binary
          {
               if (a[i] == 1)
                    sum += pow(2, i);
          }
          return sum; // returning value;
     }
};