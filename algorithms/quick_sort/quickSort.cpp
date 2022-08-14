#include<iostream>
#include<vector>

using namespace std;

// swap function
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(vector<int> &v, int l, int h) {
    int pivot = v[l];
    int i = l, j = h;
    
    do {
        do {i++;} while (v[i] <= pivot);
        do {j--;} while (v[j] > pivot);
        
        if (i < j)
            swap(&v[i], &v[j]);
    } while(i < j);
    
    swap(&v[l], &v[j]);
    
    return j;
}

void quickSort(vector<int> &v, int l, int h) {
    int j;
    if (l < h) {
        j = partition(v, l, h);
        quickSort(v, l, j);
        quickSort(v, j+1, h);
    }
}
void print(vector<int> v,int n)
{
    for (int i = 0; i < n-1; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    vector<int> v;
    int arr[] = {12,16,15,14,7,13,9,INT32_MAX};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        v.push_back(arr[i]);
    int n = v.size();

    quickSort(v, 0, n-1);

    print(v,n);
  
    return 0;
}
