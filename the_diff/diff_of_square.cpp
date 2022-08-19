#include <iostream>
using namespace std;
int main()
{
  int n = 10;
  int sum_of_squares;
  int square_of_sum;
  // formula for sum of squares.
  sum_of_squares = (n * (n + 1) * (2 * n + 1)) / 6;
  // formula for 1 to n integers.
  square_of_sum = (n * (n + 1)) / 2;
  // square the sum.
  square_of_sum *= square_of_sum;
  int diff;
  // take the difference.
  diff = abs(square_of_sum - sum_of_squares);
  cout << diff << endl;
}
