#Function to see how many people can get on one boat
def getBoats(newarr, limit):
    newarr.sort()
    left = 0
    right = len(newarr) - 1
    boats_number = 0
    if newarr[right] > limit:
        return -1
    
    while left <= right:
        if left == right:
            boats_number = boats_number + 1
            break
        if newarr[left] + newarr[right] <= limit:
            left = left + 1
            right = right - 1
            boats_number = boats_number + 1
        if newarr[right] == limit:
            right = right - 1
            boats_number = boats_number + 1
        
    return boats_number

arr = [ 4 , 2, 1, 5, 5, 3, 2, 1, 3, 5, 1, 2, 3, 3 ]
limit = 5

number_of_boats = getBoats(arr, limit)

print('The number of boats needed are {}'.format(number_of_boats))