//User function Template for C++
class Solution{   
public:
    int waysToBreakNumber(int N){
        // code here
        long M=1000000007;
        long n=N;
        return (int)((((n+1)*(n+2)/2))%M);
    }
};