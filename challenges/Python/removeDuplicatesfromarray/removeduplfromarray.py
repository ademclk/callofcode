# Python 3 code to demonstrate
# removing duplicated from array


arr = [1, 5, 3, 6, 3, 5, 6, 1]
print ('The original array is : '+ str(arr))

res = [arr[i] for i in range(len(arr)) if i == arr.index(arr[i]) ]

print('The array after removing duplicates :'
		,res)
