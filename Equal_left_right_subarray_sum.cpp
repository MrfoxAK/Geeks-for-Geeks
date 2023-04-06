class Solution
{
public:
    int equalSum(int N, vector<int> &A)
    {
        if (N == 1)
            return 1;
        int right = 0;
        for (int i = 1; i < N; i++)
            right += A[i];

        int left = 0;
        for (int i = 1; i < N; i++)
        {
            left += A[i - 1];
            right -= A[i];
            if (left == right)
                return i + 1;
        }
        return -1;
    }
};