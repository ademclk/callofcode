#include<bits/stdc++.h>
using namespace std;

// swap function
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partiton(vector<int> &arr,int l,int h){
   int pivot  = arr[l];
   int i = l, j = h;

   while (i<j)
   {
      if(arr[i] <= pivot){
          i++;
      }
      if(arr[j] > pivot){
          j--;
      }
      if(i<j){
          swap(arr[i],arr[j]);
      }
   }
   swap(arr[l],arr[j]);
   return j;
   

}

// function of quickSort sort

void quickSort(vector<int> &arr,int l,int h){
    if(l<h){
        int j = partiton(arr,l,h);
        quickSort(arr,l,j);
        quickSort(arr,j+1,h);
    }
}


// function for priting array values.
void print(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
   vector<int> arr = {12, 16, 15, 14, 7, 13, 9}; 
   int n = arr.size();
   int l = 0, h = n-1;
   
   cout<<endl<<"array before sorting : ";print(arr,n);
   quickSort(arr,l,h);
   cout<<endl<<"array after sorting :  ";print(arr,n);
   cout<<endl; 
}