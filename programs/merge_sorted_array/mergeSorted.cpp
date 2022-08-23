#include <iostream>
#include <vector> 

using namespace std;
vector<int> mergeSorted(vector<int> array1, vector<int> array2) {
    int idx1 = 0, idx2 = 0;
    vector<int> res;
    while(idx1 < array1.size() && idx2 < array2.size()) {
        if (array1[idx1] < array2[idx2]) {
            res.push_back(array1[idx1]);
            idx1++;
        }
        else {
            res.push_back(array2[idx2]);
            idx2++;
        }
    }
    if (idx1 == array1.size()) {
        res.insert(res.end(),array2.begin() + idx2, array2.end());
    }
    else {
        res.insert(res.end(),array1.begin() + idx1, array1.end());
    }
    return res;
}

int main() {
    vector<int> array1 = {1,3,5,7,9};
    vector<int> array2 = {2,4,5,6,8,10};
    vector<int> merged = mergeSorted(array1, array2);

    // Print arrays
    cout << "Array 1: ";
    for (auto &i: array1) {cout << i << " ";}
    cout << "\n" << "Array 2: ";
    for (auto &i: array2) {cout << i << " ";}
    cout << "\n" << "Merged Array: ";
    for (auto &i: merged) {cout << i << " ";}
}
