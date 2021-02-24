#Binary Search algorithm Implementation
def binarySearch(arr, number):
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] == number:
            return mid
        if arr[mid] < number:
            start = mid + 1
        if arr[mid] > number:
            end = mid - 1
    else:
        return -1


arr = [1, 3, 4 , 5 , 6 , 7]
number = 4
index = binarySearch(arr, number)
if index == -1:
    print('Cannot Find the element')
else:
    print('Element found at index {} '.format(index))
