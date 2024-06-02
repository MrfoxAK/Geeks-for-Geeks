s = [0]

q = [[0,6],[0,3],[0,2],[1,4],[1,5]]

l = len(q)

for i in range(0,l):
     int_result = int(''.join(map(str, q[i][:1])))
     upper = int(''.join(map(str, q[i][1:])))
     if int_result == 0:
          s.append(upper)
     elif int_result == 1:
          s_len = len(s)
          for j in range(0,s_len):
               s[j] = s[j]^upper

s = sorted(s)

print(s)










