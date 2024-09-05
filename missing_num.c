int missingNumber(int n, vector<int> &arr)
{

     // Your code goes here
     long long int sum = accumulate(arr.begin(), arr.end(), 0);
     return ((n * (n + 1)) / 2) - sum;
}