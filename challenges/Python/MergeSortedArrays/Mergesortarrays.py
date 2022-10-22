# Python program to merge two sorted arrays
def mergeArrays(arr1, arr2, x, y, arr3):
	i = 0
	j = 0
	k = 0

	while(i < x):
		arr3[k] = arr1[i]
		k += 1
		i += 1

	while(j < y):
		arr3[k] = arr2[j]
		k += 1
		j += 1

	arr3.sort()

if __name__ == '__main__':
	arr1 = [1, 3, 5, 7]
	x = len(arr1)

	arr2 = [2, 4, 6, 8]
	y = len(arr2)

	arr3 = [0 for i in range(x+y)]
	mergeArrays(arr1, arr2, x,y, arr3)

	print("Array after merging")
	for i in range(x + y):
		print(arr3[i], end=" ")

