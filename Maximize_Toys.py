#User function Template for python3

class Solution:
    def toyCount(self, N, K, arr):
        # code here
        arr.sort()
        total = 0
        c=0
        for i in range(len(arr)):
            if total>K:
                break
            if total+arr[i]>K:
                break
            # print(arr[i])
            total = total + arr[i]
            # print(total)
            c += 1
        return c

