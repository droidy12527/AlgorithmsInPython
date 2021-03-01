#Find the missing element from the given array

def findMissing(arr):
    total_sum = sum(arr)
    length = len(arr)
    intended_sum = length * (length + 1) // 2
    if total_sum == intended_sum:
        return -1
    else:
        return intended_sum - total_sum

arr = [ 0, 1, 2, 3, 4, 5, 6, 8]

missing_element = findMissing(arr)
if missing_element == -1:
    print('There was no missing element')
else:
    print('The missing element is {}'.format(missing_element))