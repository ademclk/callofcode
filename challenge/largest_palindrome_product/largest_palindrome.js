// declare global variables
let product = 0;
let palindromeArray = [];

const palindromeFunctionHandler = () => {
	// Since the largest 3-digit number is 999 and the lowest is 100
	// write a loop that gets the product of every number in the range 100-999

	for (let num1 = 999; num1 > 99; num1--) {
		// first loop multiplies num1 by every value of num2 in second loop

		for (let num2 = 999; num2 > 99; num2--) {
			product = num1 * num2;

			// convert number to array in other to reverse
			let number = product.toString().split('');
			let numberReversed = [...number].reverse();

			// write condition to check if number is a palindrome eg abcde === edcba
			if (number.join('') === numberReversed.join('')) {
				//add palindrome to array
				palindromeArray.push(+number.join(''));
			}
		}
	}

	// get the max of all palindrome
	const palindrome = Math.max(...palindromeArray);
   console.log(palindrome);
   return palindrome;
};

palindromeFunctionHandler();
