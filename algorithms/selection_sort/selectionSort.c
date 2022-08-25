#include <stdio.h>
#define ARR_LENGTH 7

// SELECTION SORT
/*
Algorithm:
	1. Select the nth smallest element from the array where n increases from 1 to arrayLength.
	2. Swap the smallest element with the element at index (n - 1).
	   First smallest element gets replaced with the 0th element,
	   Second smallest element replaces element at index 1, and so on ..
	3. Repeat (arrayLength - 1) times.
*/

void printArray(int arr[], int length) {
	printf("{");

	for(int i = 0; i < length; i++) {
		printf("%d", arr[i]);

		if(i != length - 1) {
			printf(", ");
		}
	}

	printf("}\n");
}

int findIndexOfSmallestElement(int arr[], int length, int startIndex) {
	int smallestElementIndex = startIndex;

	for(int i = startIndex + 1; i < length; i++) {
		if(arr[i] < arr[smallestElementIndex]) {
			smallestElementIndex = i;
		}
	}

	return smallestElementIndex;
}

int main(int argc, char const *argv[]) {
	int arr[ARR_LENGTH] = {25, 12, 3, 8, 12, 19, 5};
	int elementIndex, temp;

	printf("Array before sorting: ");
	printArray(arr, ARR_LENGTH);
	printf("\n");

	// loop that does (n - 1) comparisons and swaps the elements
	for(int i = 0; i < ARR_LENGTH - 1; i++) {
		// find the smallest element index
		elementIndex = findIndexOfSmallestElement(arr, ARR_LENGTH, i);

		if(elementIndex != i) {
			// swap the values
			temp = arr[elementIndex];
			arr[elementIndex] = arr[i];
			arr[i] = temp;
		}

		printf("Array after %d iteration(s): ", (i + 1));
		printArray(arr, ARR_LENGTH);
	}

	printf("\nArray after sorting: ");
	printArray(arr, ARR_LENGTH);

	return 0;
}
