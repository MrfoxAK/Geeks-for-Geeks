#User function Template for python3

class Solution:
    def commonElements (self,A, B, C, n1, n2, n3):
        # your code here
        a = []
        for i in A:
            if i in B:
                a.append(i)
        b=[]
        for i in C:
            if i in a:
                b.append(i)
                
        return b