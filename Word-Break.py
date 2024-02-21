n = 6
s = "ilikesamsung"
dictionary = { "i", "like", "sam", "sung", "samsung", "mobile"}

#print(dictionary)

a =[]
len=len(s)

for i in range(0,len+1):
  for j in range(0,len+1):
    #print(s[i:j])
    a.append(s[i:j])



for i in a:
  if i in dictionary:
      print(i)