#Function to Find the last position of the element based on the moves

def findLastPosition(values):
    x = 0
    y = 0
    for value in values:
        if value == 'L':
            x -= 1
        elif value == 'R':
            x += 1
        elif value == 'U':
            y += 1
        elif value == 'D':
            y -= 1
    return (x, y)


values = 'LRLRUDR'

result = findLastPosition(values)

if result == -1:
    print('There was error processing the request')
else:
    print('The last position is {}'.format(result))