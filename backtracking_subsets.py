def findSubsets(nums, ans = [], curr = [], index = 0):
    if index > len(nums):
        return
    ans.append(curr[:])
    for i in range(index, len(nums)):
        if nums[i] not in curr:
            curr.append(nums[i])
            findSubsets(nums, ans, curr, i)
            curr.pop()
    return ans

arr = [ 1, 2, 3]
solution = findSubsets(arr)
print('The number of possible subsets are {}'.format(solution))