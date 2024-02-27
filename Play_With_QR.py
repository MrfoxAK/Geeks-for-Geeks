#User function Template for python3

class Solution:
    def game_with_number (self, l,  n) : 
        #Complete the function
        for i in range (0,len(l)):
            if i+1 < len(l):
                l[i] = l[i] | l[i+1]
        return l