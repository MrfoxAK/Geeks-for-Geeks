#User function Template for python3


#Function to count number of nodes in BST that lie in the given range.
class Solution:
    def getCount(self, root, l, h):
        if root is None:
            return 0
        if l <= root.data <= h:
            return 1 + self.getCount(root.left, l, h) + self.getCount(root.right, l, h)
        elif root.data < l:
            return self.getCount(root.right, l, h)
        else:
            return self.getCount(root.left, l, h)
