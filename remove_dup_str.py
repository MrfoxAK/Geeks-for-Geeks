class Solution:
    def removeDups(self, S):
        # code here
        sc = ""
        l = []
        s = S
        for i in range(0, len(s)):
            #  print(s[i])
            if s[i] not in l:
                l.append(s[i])
#         print(l)
        for ele in l:
            sc += ele
        # print(sc)
        S = sc
        return S
