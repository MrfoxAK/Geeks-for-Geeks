l = [3,1,2,5,3]

l.sort()

for i in range(0, len(l)-1):
     if l[i] == l[i+1]:
          print(l[i])

for i in range(0, len(l)):
     if i+1 != l[i]:
          print(i+1)





