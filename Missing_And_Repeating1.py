def findTwoElement(self, arr):
    # code here
    ans = []
    for e in arr:
        idx = abs(e)-1
        if arr[idx] < 0:
            ans.append(abs(e))
        else:
            arr[idx] *= -1

    for i, e in enumerate(arr):
        if e > 0:
            ans.append(i+1)

    return ans
