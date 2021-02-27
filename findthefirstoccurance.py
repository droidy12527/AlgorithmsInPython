#Find the first Occurance in the sorted array

def firstOccurance(arr, el):
    left = 0
    right = len(arr) - 1
    while left < right:
        mid = left + right // 2
        if arr[mid] == el:
            if arr[mid-1] != el or mid == 0:
                return mid
            right = mid -1
        elif arr[mid] > el:
            right = mid - 1
        else:
            left = mid + 1
    return -1 

arr = [2,3,4,5,5,5,6,7,10]
element = 5
index = firstOccurance(arr, element)
if index == -1:
    print('The element Does not exist in the given array')
else:
    print('The element exist at the index {}'.format(index))