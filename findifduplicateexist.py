#Using maps to solve this problem
def findDuplicates(arr):
    m = {}
    for element in arr:
        if element in m:
            return True
        else:
            m[element] = 1
    return False


arr = [ 1, 2, 3 , 1 ] 
answer = findDuplicates(arr)
if answer == True:
    print('Duplicated exist in Array')
else:
    print('Duplicates does not exist in array')