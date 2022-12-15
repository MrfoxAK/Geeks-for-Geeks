// User function template for c++

class Solution
{
public:
    string BalancedString(int N)
    {
        string abcd, ans;
        for (int i = 0; i < 26; i++)
            abcd.push_back(i + 'a');

        int cnt = N / 26, temp = N;
        while (cnt--)
            ans.append(abcd);

        N -= 26 * (N / 26);

        if (N % 2)
        {
            // Odd
            int sum = 0;
            while (temp)
            {
                sum += (temp % 10);
                temp /= 10;
            }

            int first = (N + 1) / 2;
            int second = (N - 1) / 2;

            if (sum % 2)
                swap(first, second);

            ans.append(abcd.substr(0, first));
            ans.append(abcd.substr(abcd.size() - second, second));
        }
        else
        {
            // Even
            ans.append(abcd.substr(0, N / 2));
            ans.append(abcd.substr(abcd.size() - (N / 2)));
        }
        return ans;
    }
};