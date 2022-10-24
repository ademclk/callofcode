# Python3 Program to
# find sum of square,
# square of the sums 
# and the difference between them

def sumofsquares(n) :
	sm = 0
	for i in range(1, n+1) :
		sm = sm + (i * i)
	return sm
def squareofsum(n):
    sm=0
    for i in range (1,n+1):
        sm=sm+i
    return sm*sm
# Driven Program
n= int(input("Enter the value of n\n"))
x=sumofsquares(n)
y=squareofsum(n)
print("The sum of the squares is : " + str(x))
print("The square of the sum  is : " + str(y))
z=x-y
print("The difference between them is : " + str(abs(z)))

