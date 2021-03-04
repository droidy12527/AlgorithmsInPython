#Find the indices of the two numbers using map

def findIndex(arr, target):
    m = {}
    for i in range(len(arr)):
        req_number = target - arr[i]
        if req_number in m:
            return (m[req_number], i)
        m[arr[i]] = i
    return -1

arr = [ 3, 6, 12, 14 ]
target = 15
answer = findIndex(arr, target)
if answer == -1:
    print('There was no indices found')
else:
    print('The two indices are {}'.format(answer))
