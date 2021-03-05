
def findAnargrams(arr):
    answers = []
    m = {}
    for elements in arr:
        make = ''.join(sorted(elements))
        if make not in m:
            m[make] = []
        m[make].append(elements)
    for hello in m.values():
        answers.append(hello)
    return answers



arr = [ "eat", "tea", "tan", "ate", "nat", "bat" ]
answer = findAnargrams(arr)
print('The anargrams are {}'.format(answer))

