#Find the number of primes less than given number

import math

def findPrimes(number):
    if number < 2:
        return -1
    primebox = [True] * number
    primebox[0] = primebox[1] = False
    for i in range(2, int(math.ceil(math.sqrt(number)))):
        if(primebox[i]):
            for multiples in range( i*i , number , i):
                primebox[multiples] = False
    return sum(primebox)

number = 12
num_of_primes = findPrimes(number)
if num_of_primes == -1:
    print('There was error finding the primes')
else:
    print('The number of prime are {}'.format(num_of_primes))