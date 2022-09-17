
//User function Template for Java

class Solution

{

    public int Count(int L, int R)

    {

        int comp=0,prime=0;

        for(int i = L;i<=R;i++){

            if(i == 1)continue;

            if(isPrime(i))prime++;

            else comp++;

        }

        return comp-prime;

    }

    public boolean isPrime(int n) {

        for (int i = 2; i * i <= n; i++)

            if (n % i == 0)

                return false;

        return true;

    }

}