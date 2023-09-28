from typing import List


class Solution:
    def convertToWave(self, n : int, a : List[int]) -> None:
        # code here
        for i in range(1,n):
            if i%2!=0:
                a[i],a[i-1] = a[i-1],a[i]
