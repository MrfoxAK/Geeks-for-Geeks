l = [9, 9, 9, 2, 5]


dicta = {}


for i in l:
     dicta.update({i:0})


for i in l:
     if i in dicta:
          dicta[i] += 1


sorted_dict = dict(sorted(dicta.items(), key=lambda item: (-item[1], item[0])))
print(sorted_dict)


arr = []

z = 0

for i in sorted_dict:
     curr = sorted_dict[i]
     while(curr>0):
          arr.append(i)
          curr -= 1

print(arr)