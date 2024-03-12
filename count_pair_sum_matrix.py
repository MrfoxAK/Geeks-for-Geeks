n=3
x=21
count = 0

mat1 = [[1,5,6],
        [8,10,11],
        [15,16,18]
        ]

mat2 = [[2,4,7],
        [9,10,12],
        [13,16,20]
        ]

l = []

for i in mat2:
     for j in i:
          l.append(j)

print(l)

for i in mat1:
     for j in i:
          now = x-j
          if now in l:
               print("(",j,now,")")
               count+=1


print(count)





