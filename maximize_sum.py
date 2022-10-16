
from collections import Counter
class Solution:
    
    def maximizeSum (self,arr, n) : 
        #Complete the function
        maxSum = 0
        d = Counter(arr)
        for i in arr[::-1]:
            elem = i
            if d[elem] > 0:
                maxSum += elem
                d[elem] -= 1
                if elem - 1 in d:
                    d[elem-1] -= 1
        return maxSum
        

