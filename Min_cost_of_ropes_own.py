l = [4,3,2,6]

sum=0

for i in range (0,len(l)-1):
  l.sort()
  s=l[i]+l[i+1]
  sum+=s
  l[i+1]=s

print(sum)
