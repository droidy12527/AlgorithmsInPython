#Function to Find the longest Substring which has non repeating characters

def findLongestSub(s):
    left = 0
    right = 0
    m = {}
    length = len(s)
    answer = 0
    while left < length and right < length:
        element = s[right]
        if element in m:
            left = max(left, m[element])
        m[element] = right
        answer = max(answer, right - left+1)
        right = right + 1   
    return answer

s = 'ababdhksoia'

len_sub = findLongestSub(s)

if len_sub == -1:
    print('There was error with the code')
else:
    print('The length of longest substring is {}'.format(len_sub))