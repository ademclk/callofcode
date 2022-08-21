import math

number = 600851475143

def largest_prime_factor(n):
    largest_prime = -1

    while n % 2 == 0:
        largest_prime = 2
        n = n / 2

# Start at 3 and go up to the square root of n by increments of 2
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % i == 0:
            largest_prime = i
            n = n / i
    if n > 2:
        largest_prime = n   
    return largest_prime

print(largest_prime_factor(number))