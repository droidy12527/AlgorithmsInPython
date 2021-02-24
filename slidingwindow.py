#Sliding window problem Implementation for Finding Max Sum of Elements in an array

def sliding_window(arr, window_size):
    if(len(arr) < window_size):
        return -1
    else:
        #The First Window Sum that has to be calculated is the max Sum if we assume
        max_sum = sum([ arr[i] for i in range(window_size)])
        for i in range(len(arr) -  window_size):
            temp_sum = max_sum - arr[i] + arr[i+window_size]
            max_sum = max(temp_sum, max_sum)
            print(max_sum)
        return max_sum

arr = [10, -20 , 45, 90 , 35 , 100 , 10]
window_size = 3

max_sum  =  sliding_window(arr, window_size)
print('The max Sum of {} Elements in array is {}'.format(window_size, max_sum))