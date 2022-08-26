// Fizz Buz
// # // Print integers 1 to N, but

// # // if an integer is divisible by 3 print “Fizz” ,
// # // if an integer is divisible by 5 print “Buzz”,
// # // if an integer is divisible by both 3 and 5 print “FizzBuzz"


printIntegers = () => {
    let int = parseInt(prompt('Enter a number'));
    for (let i = 1; i <= int; i++) {
        if (i % 3 === 0 && i % 5 === 0) {
            console.log('FizzBuzz');
        } else if (i % 3 == 0) {
            console.log('Fizz');
        } else if (i % 5 == 0) {
            console.log('Buzz');
        } else {
            console.log(i);
        };
    };
};

printIntegers();