

// User function Template for Java

class Solution
{
     String minSum(int[] arr)
     {
          StringBuilder sol = new StringBuilder();
          Arrays.sort(arr);

          int i = 0;
          int j = arr.length - 1;

          while (arr[i] == 0)
          {
               i++;
          }

          int carry = 0;
          for (; j - 1 >= i; j -= 2)
          {
               int sum = arr[j] + arr[j - 1] + carry;
               carry = sum / 10;
               sum = sum % 10;
               sol.append((char)(sum + '0'));
          }

          int sum = 0;
          if (carry > 0)
               sum += carry;
          if (j >= i)
               sum += arr[j];
          while (sum > 0)
          {
               sol.append((char)((sum % 10) + '0'));
               sum /= 10;
          }
          return sol.reverse().toString();
     }
}