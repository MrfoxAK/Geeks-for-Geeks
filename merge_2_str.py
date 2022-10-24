class Solution:
    def merge(self, S1, S2):
        # code here


        result = ''

        i = 0

        j = 0

        while i < len(S1) or j < len(S2):

            if i!= len(S1):

                result+= S1[i]

                i+=1

            if j!= len(S2):

                result+= S2[j]

                j+=1

        return result  
