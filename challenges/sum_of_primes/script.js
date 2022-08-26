// Sum of Primes

// Find the sum of primes below n.

 sumOfPrimes = () => {
    let num = parseInt(prompt('Enter a number'))
    // create array
    let newArr = []
    
    // check if number is prime
    function isPrime(num){
        if (num === 2) {
            return true;
            }
    
        for(let i = 2; i < num; i++ ) {
            if( num % i === 0) return false;
        }  
        return true;
    }
    // push prime numbers to array
    for(let i = 2; i <= num; i++){
        if(isPrime(i)){
            newArr.push(i)
        } 
    }
    return newArr.reduce((a,b) => a + b, 0)
    
    }

    sumOfPrimes();
    
