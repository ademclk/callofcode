
const binarySearchSorted = (arr, target) => {
    let start = 0;
    let end = arr.length - 1;  
    
    while(start <= end) {
        
      let middle = Math.floor((start + end) / 2);   
      
      if(target === arr[middle]) {
        return console.log('Target has been found!');
      }    
      
      if(target > arr[middle]) {
        start = middle + 1;
      }    
      
      if(target < arr[middle]) {
        end = middle - 1;
      }    
      
      }
      console.log('Search completed, target not found...')
    }


    binarySearchSorted([1,5,8,9,10,14,16,19], 8)