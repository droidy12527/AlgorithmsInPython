#Algorithm with O(N) complexity to move all zeros in back order of an Array

def move_zeros(arr):
    switcher = 0
    for element in arr:
        if element != 0:
            arr[switcher] = element
            switcher = switcher + 1
    for i in range(switcher,len(arr)):
        arr[i] = 0        
    return arr

arr = [ 0, 3, 9 , 0 , 0 , 12, 32]
arr_original = arr.copy()

moved_zero_array = move_zeros(arr)

print('The array before moving the zeros is {} and after moving the zeros is {} '.format(arr_original, moved_zero_array))