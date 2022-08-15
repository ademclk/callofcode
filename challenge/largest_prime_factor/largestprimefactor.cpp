#include <iostream>
#include <math.h>

using namespace std;
int main()
{
  long long int n = 800851475143;
  long long int max = INT_MIN;
  while (n % 2 == 0)
  {
    max = 2;
    n = n / 2;
  }

  for (long long int i = 3; i <= sqrt(n); i = i + 2) // i will only iterate through odd values
  {
    while (n % i == 0)
    {
      max = i;
      n = n / i;
    }
  }
  if (n > 2)
  {
    max = n;
  }
  cout << max << endl;
}
