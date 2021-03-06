def findSumzero(arr1, arr2, arr3, arr4):
    answer = 0
    m = {}
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            sumple = arr1[i] + arr2[j]
            if sumple not in m:    
                m[sumple] = 0
            m[sumple] += 1
    for k in range(len(arr3)):
        for l in range(len(arr4)):
            sumple1 = - ( arr3[k] + arr4[l] )
            if sumple1 in m:
                answer += m[sumple1]
    return answer
    

arr1 = [ 1, 2 ]
arr2 = [-2, -1]
arr3 = [-1, 2 ]
arr4 = [0, 2]

answer = findSumzero(arr1, arr2, arr3, arr4)
print('The number of possible ways are {}'.format(answer))