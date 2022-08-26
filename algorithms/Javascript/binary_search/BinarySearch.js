// Binary Search

// Will Search sorted array "nums" for a target value. If value is not found, returning -1

let nums = [-1,0,3,5,9,12]
let target = 3

var search = function(nums, target) {
    // Brute Force Method
    
    // for(let i = 0; i < nums.length; i++){
    //     if(nums[i] === target){
    //         console.log(`Target has been found at index ${i}`)
    //         return i
    //     } 
        
    // }
    // return -1
    
    // Includes Method
    
    // if(nums.includes(target)){
    //     console.log('Eureka!!!');
    //     console.log(nums.indexOf(target))
    //     return nums.indexOf(target)
    //    }
    // return -1 
       
    // Ternary Method
    console.log(nums.includes(target) ? nums.indexOf(target) : -1)
    
    // 
    
};

search(nums, target)
