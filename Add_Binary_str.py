class Solution:
    def addBinary(self, A, B):
        # code here
        # 		return bin(int(A,2) + int(B,2)).replace("0b","")
    a = int(A, 2)
    b = int(B, 2)
    c = bin(a+b)
    return str(c).replace("0b", "")
