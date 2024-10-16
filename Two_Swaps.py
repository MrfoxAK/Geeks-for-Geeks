arr = [6, 5, 3, 4, 2, 1]
swap = 0
def swap_numbers(arr, i, j):
    """Swaps the elements at indices i and j in the given array."""
    arr[i], arr[j] = arr[j], arr[i]

for i in range(0, len(arr)):
     if arr[i] != i+1:
          j = arr.index(i+1)
          swap_numbers(arr, i, j)
          swap += 1
     else:
          continue


if swap == 2:
     print("True")
else:
     print("Flase")













