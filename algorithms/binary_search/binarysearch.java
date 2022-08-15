// assume sorted array a=[10,20,30,40,50,60,70];
// we need to find the index of 10 in the given array 

import java.util.* ;

public class binarysearch{
    public static void main (String [] args){
        
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter array length ");
        int n = scn.nextInt();
        int arr [] = new int [n];
        System.out.print("Enter array elements(need to be sorted) in on line keep space between each element like 10 40 50 60 ");
        for(int i=0;i<n;i++){
            arr[i]=scn.nextInt();
        }
        System.out.print("Enter target element ");
        int target = scn.nextInt();
        System.out.print(binarySearch(arr,target));
        
    }

    public static  int  binarySearch(int[] arr, int target) {

        int start = 0;
        int end = arr.length-1;
        while(start<=end){
            int mid = start+(end-start)/2;    // this format is used to avoid integer overflow [ST+END] may be the case of overflow 
            if(arr[mid]<target){          // is a[mid] < target our target element is on right side[mid+1 , end]
                 start = mid+1;            // so we reduce our range   
            }else if(arr[mid]>target){    // is a[mid] > target our target element is on left side [st, mid-1];
                end = mid-1;             
            }else {
                return mid ;            // found our target element return the idx 
            }
        }

        return -1 ; // if target element is not present in array 

    }
}

// INTEGER.MAX_VALUE +1  =  INTEGER.MIN_VALUE
// INTEGER.MIN_VALUE-1 = INTEGER.MAX_VALUE 

