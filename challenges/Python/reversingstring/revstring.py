#Python 3 code to reverse a string
def reverse(s):
	str = ""
	for i in s:
		str = i + str
	return str

s= str(input("Enter the string to be reversed \n"))

print("The original string is : ", end="")
print(s)

print("The reversed string(using loops) is : ", end="")
print(reverse(s))