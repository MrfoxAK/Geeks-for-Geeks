#User function Template for python3

class Solution:
    def minRow(self,n,m,a):
        count = []
        for i in range(n):
            arr = a[i]
            ans = arr.count(1)
            count.append(ans)
        Min = min(count)
        Index = count.index(Min)
        return Index + 1
