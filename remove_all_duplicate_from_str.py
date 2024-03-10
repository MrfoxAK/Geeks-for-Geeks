str = "geEksforGEeks"

tmp=""

for char in str:
     if char not in tmp:
          tmp+=char

print(tmp)
