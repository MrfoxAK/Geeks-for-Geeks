
class Solution:
    
    #Function to find the minimum indexed character.
    def minIndexChar(self,Str, pat):

        for i in Str:

            if i in pat:

                return Str.index(i)

        return -1

