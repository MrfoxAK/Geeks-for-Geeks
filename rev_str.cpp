//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        // Your code goes here
        int l=0;
        int r=str.length()-1;
        while(l<r)
        {
            swap(str[l],str[r]);
            l++;
            r--;
        }
        return str;
    }
};
