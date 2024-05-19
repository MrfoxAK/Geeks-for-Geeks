

k = 10
n = 4


l = [4,5,5,6,8,12,14,16,16,19]

min_value = min(l)
max_value = max(l)

rang = max_value-min_value

for i in range(rang):
     low = k-i
     high = k+i
     if(low in l) and (high in l):
          print(k+i)
          break
     elif(low in l) or (high in l):
          if (low in l):
               print(k-i)
          elif(high in l):
               print(k+i)
          break













