# Sample string
ip_address = "5555..555"

flag = 0
count = 0

for i in range(0,len(ip_address)):
     if ip_address[i] == ".":
          if ip_address[i-1] == ".":
               flag = 1
               break
          if ip_address[i+1] == ".":
               flag = 1
               break
     if ip_address[i] == ".":
          count+=1

if count == 3:
     flag = 0
else:
     flag = 1

split_ip = []

if flag == 0:
     split_ip = ip_address.split(".")
     for i in split_ip:
          if int(i)>0 and int(i)<255:
               flag = 0
          else:
               flag = 1
     if flag == 1:
          print("False")
     else:
          print("True")
else:
     print("False")



