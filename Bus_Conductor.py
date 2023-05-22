c = [3,1,5]

p = [2,7,4]


c.sort()
p.sort()

sum = 0

for i in range(len(c)):
     sum += abs(c[i] - p[i])

print(sum)



#User function Template for python3

# class Solution:
#     def findMoves(self,n,c,p):
#         #code here
#         c.sort()
#         p.sort()

#         sum = 0

#         for i in range(len(c)):
#             sum += abs(c[i] - p[i])
#         return sum

        




