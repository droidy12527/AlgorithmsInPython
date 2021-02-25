def checkMountain(newarr):
    i = 1
    while i < len(newarr) and newarr[i] > newarr[i-1]:
        i = i + 1
    if i == len(newarr):
        return False
    while i < len(newarr) and newarr[i] < newarr[i-1]:
        i = i + 1
    if i == len(newarr):
        return True

arr = [1, 2, 3, 4, 2, 1]

result = checkMountain(arr)

if result == True:
    print('It is a mountain climbing array')
else:
    print('It is not a mountain climbing array')