void solve(long long n, vector<long long> &ans)
{
     // base case
     if (n <= 1)
          return;

     if (n % 2 == 0)
     {
          n = sqrt(n);
          ans.push_back(n);
          solve(n, ans);
     }
     else
     {
          n = n * sqrt(n);
          ans.push_back(n);
          solve(n, ans);
     }
}

vector<long long> jugglerSequence(long long n)
{

     vector<long long> ans;
     ans.push_back(n);
     solve(n, ans);
     return ans;
}