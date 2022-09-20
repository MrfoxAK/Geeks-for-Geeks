//User function Template for C++

class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
        //code here
        if(base==2)
        return 0;
        
        // base = base-2;
        // base = base/2;
        
        base = (base/2) - 1;
        
        return (base*(base+1))/2;
    }
};