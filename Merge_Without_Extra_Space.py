import numpy as np

class Solution:
    
    #Function to merge the arrays.
    def merge(self,arr1,arr2,n,m):

        #code here

        ans=[0 for i in range(m+n)]

        for i in range(n):

            ans[i]=arr1[i]

        for i in range(m):

            ans[n+i]=arr2[i]

        ans.sort()

        for i in range(n):

            arr1[i]=ans[i]

        for i in range(m):

            arr2[i]=ans[n+i]
        
    

