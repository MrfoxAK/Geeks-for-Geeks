class Solution:

 

    def firstRepChar(self, s):

        res='-1'

        d={}

        for i in s:

            if i not in d:

                d[i]=1

            else:

                res=i

                break

        return res
