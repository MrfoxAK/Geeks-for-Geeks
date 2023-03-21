
A = [1, 2, 2, 1]
X=3
A.sort()
     # print(A)
curr=0
for i in range(len(A)):
     # print(A[i])
     # j = i+1
     for j in range(i+1,len(A)):
          curr = X-(A[i]+A[j])
          if curr in A:
               if curr ==A[i] or curr == A[j]:
                    continue
               print(A[i]," ",A[j])
