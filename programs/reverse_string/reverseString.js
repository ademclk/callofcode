var reverseString = () => {
  let str = prompt('Please enter a string to be reversed:', 'dlroW olleH');

  console.log(str.split('').reverse().join(''));
};

reverseString();
