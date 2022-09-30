
class Solution:
    def findMidSum(self, ar1, ar2, n):
        # code here
        l = []
        for i in ar1:
            l.append(i)
        for j in ar2:
            l.append(j)
        l.sort()
#         print(l)
        h = int(2*n/2)
        value = l[h-1]+l[h]
#         print(value)
        return value
