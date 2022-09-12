class Solution:

    def isDivisible999(self, N):
        # code here
        N=int(N)
        if N%999==0:
            return 1
        else:
            return 0