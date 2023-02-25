l=[]
arr = [10,2,3,4,5,7,8]
t = 23
for i in range(len(arr)):
    for j in range(len(arr)):
        for k in range(len(arr)):
            if (t - (arr[i]+arr[j]+arr[k])) in arr and  (t - (arr[i]+arr[j]+arr[k]))not in l:
                l.append(arr[i])
                l.append(arr[j])
                l.append(arr[k])
                l.append(t - (arr[i]+arr[j]+arr[k]))
                l.append('$')
            else:
                continue


print(l)