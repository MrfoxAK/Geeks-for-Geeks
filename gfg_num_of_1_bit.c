// Given a positive integer N, print count of set bits in it.

// Example 1:

// Input:
// N = 6
// Output:
// 2
// Explanation:
// Binary representation is '110'
// So the count of the set bit is 2.
// Example 2:

// Input:
// 8
// Output:
// 1
// Explanation:
// Binary representation is '1000'
// So the count of the set bit is 1.

int setBits(int N)
{
     // Write Your Code here
     int ct = 0;
     while (N > 0)
     {
          if (N % 2 == 1)
          {
               ct++;
          }
          N = N / 2;
     }
     return ct;
}
