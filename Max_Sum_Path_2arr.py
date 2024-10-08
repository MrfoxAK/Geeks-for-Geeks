#Your task is to complete this function
#Function should return an integer denoting the required answer
class Solution:
    def maxPathSum(self, arr1, arr2):
        # Code here
        ans=0
        a=0
        b=0
        n=len(arr1)
        m=len(arr2)
        i=j=0
        while i<n and j<m:
            if arr1[i]<arr2[j]:
                a+=arr1[i]
                i+=1
            elif arr1[i]>arr2[j]:
                b+=arr2[j]
                j+=1
            else:
                ans+=max(a,b)+arr1[i]
                i+=1
                j+=1
                a=0
                b=0
        while i<n:
            a+=arr1[i]
            i+=1
        while j<m:
            b+=arr2[j]
            j+=1
        return ans+max(a,b)
