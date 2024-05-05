#User function Template for python3

'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
class Solution:
    #Complete the function below
    def helper(self, root, d, dist):
        if root == None: return
        d[dist] = d.get(dist, 0)
        d[dist] += root.data
        self.helper(root.left, d, dist - 1)
        self.helper(root.right, d, dist + 1)
    
    def verticalSum(self, root):
       d = dict()
       self.helper(root, d, 0)
       keys = list(d.keys())
       keys.sort()
       return [d[k] for k in keys]
        
        #code here