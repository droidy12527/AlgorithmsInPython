#Function to Find the last occurance of number which is repeating in an array

def firstOccurance(arr, el):
    left = 0
    right = len(arr) - 1
    while left < right:
        mid = left + right // 2
        if arr[mid] == el:
            if mid == len(arr) or arr[mid + 1] != el: 
                return mid
            left = left + 1 
        elif arr[mid] > el:
            right = mid - 1
        else:
            left = mid + 1



arr = [2,3,4,5,5,5,6,7,10]
element = 5
index = firstOccurance(arr, element)
if index == -1:
    print('The element Does not exist in the given array')
else:
    print('The element exist at the index {}'.format(index))