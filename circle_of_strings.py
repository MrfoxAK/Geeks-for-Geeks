arr = ["ab" , "bc", "cd", "da"]

len_of_arr = len(arr)


vist = []


for i in range(0,len_of_arr):
     vist.append(0)

f = []
r = []

# print(vist)
for i in range(0,len_of_arr):
     len_of_curr = len(arr[i])
     f.append(arr[i][0])
     r.append(arr[i][len_of_curr-1:])
     # print(len_of_curr)

# print(f)
# print(r)


i=0
vist[0] = 1
c=0

while(1):
     if c == len_of_arr:
          print("Success")
     len_of_curr = len(arr[i])
     last_char = arr[i][len_of_curr-1:]
     if last_char in f:
          # print(last_char)
          index = f.index(last_char)
          # print(index)
          if index == 0 and c == len_of_arr-1:
               print("Success")
               break
          if vist[index] == 0:
               vist[index] = 1
               i=index
               c += 1
          else:
               print("Error1")
               break
     else:
          print("Error2")
          break










