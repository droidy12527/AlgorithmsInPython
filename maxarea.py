#Function to Find the max area of water in the code

def maxArea(inarr):
    leftpointer = 0
    rightpointer =  len(inarr) - 1
    max_area = 0
    while leftpointer < rightpointer:
        max_area = max(max_area, min(inarr[leftpointer], inarr[rightpointer]) * rightpointer - leftpointer)
        if inarr[leftpointer] < inarr[rightpointer]:
            leftpointer += 1
        else:
            rightpointer -= 1
    return max_area

arr = [ 1, 7 , 3, 5, 3, 2, 6 ]

maxarea = maxArea(arr) #36

if maxarea == -1:
    print('There was error printing the max area')
else:
    print('The max area is {}'.format(maxarea))