import numpy as np
class Solution:
    def maxTripletProduct (self, arr,  n): 
        #Complete the function
        # for i in range(len(arr)):
        #     if arr[i]<0:
        #         arr[i] = arr[i]*(-1)
        # arr = np.array(arr)
        # arr = abs(arr)
        arr.sort()
        var = max(arr[n-1]*arr[n-2]*arr[n-3],arr[n-1]*arr[0]*arr[1])
        return var