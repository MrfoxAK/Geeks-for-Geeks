class Solution:
    def twoOddNum(self, arr, N):
        # code here
        dic={}
        lis=[]
        for x in arr:
            if x not in dic:
                dic[x]=1
            else:
                dic[x]+=1
        for y in dic:
            if dic[y]%2!=0:
                lis.append(y)
        lis.sort()
        lis.reverse()
        return lis

