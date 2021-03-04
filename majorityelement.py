
def findMajority(arr):
    m = {}
    for element in arr:
        m[element] = m.get(element, 0) + 1
    for element in m:
        if m[element] > len(arr) // 2:
            return element

arr = [1, 2, 3, 1, 1]

majority_element = findMajority(arr)

print('The majority element is {}'.format(majority_element))