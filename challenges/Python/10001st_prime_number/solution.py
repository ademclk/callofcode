def primeornot(number):
    if(number==1):
      return False
    checklist = range(2, int(number**.5) + 1)
    for i in checklist:
        if number % i == 0:
            return False
    return True

def nthprime(nth):
    n_primes = 1
    n = 2
    while n_primes < nth:
        n+=1
        if primeornot(n):
            n_primes += 1
    return n

print(nthprime(10001))
