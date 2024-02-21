#User function Template for python3

class Solution:
    def wordBreak(self, n, s, dictionary):
        # Complete this function
        l=len(s)
        dp=[0]*(l+1)
        dp[0]=1
        for i in range(1,l+1):
            for word in dictionary:
                start=i-len(word)
                if start>=0 and dp[start]==1 and s[start:i]==word:
                    dp[i]=1
                    break
        return dp[l]
