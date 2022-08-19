#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sumOfSquares=0,squareOfSum=0;
    //using the formula to get the sum of squares of first n natural numbers => sumOfSquares = ((n)*(n+1)*(2n+1))/6
    sumOfSquares = ((n)*(n+1)*(2*n+1))/6;
    //using formula to get sum of first n naturals ( sumOfNumbers = (n*(n+1))/2 ), and then squaring it to get squareOfSum
    int sumOfNums = ((n)*(n+1))/2;
    squareOfSum = sumOfNums*sumOfNums;
    cout<<"Sum of squares of n Numbers: "<<sumOfSquares<<endl;
    cout<<"Square of sum of n Numbers: "<<squareOfSum<<endl;
    cout<<"Difference: "<<(squareOfSum-sumOfSquares)<<endl;
    return 0;
}