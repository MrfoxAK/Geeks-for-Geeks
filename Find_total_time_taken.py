

arr = [1,2,3,3]
time = [1,2,3,4]

l = []


time_taken = 0

for i in range(0,len(arr)):
     if arr[i] in l:
          # pass
          print("I is",i)
          time_taken += time[arr[i]-1]
     else:
          time_taken+=1
     l.append(arr[i])



print(time_taken-1)




from typing import List


class Solution:
    def totalTime(self, n : int, arr : List[int], time : List[int]) -> int:
        # code here
        d = {}
        res = 0
        for i in range(len(arr)): 
            if d.get(arr[i],0) > 0: 
                res+=time[arr[i]-1]
                d[arr[i]]= d.get(arr[i],0) + 1 
            else: 
                if i !=  0:
                    res+=1
                d[arr[i]]= d.get(arr[i],0) + 1 
        return res
        






