#include <iostream>

#include "src/hello.hpp"

using namespace std;

int main()
{
  //same as example output
  TriangleNumberCalculator calculate;
  cout << calculate.value(1) << endl;
  cout << calculate.value(2) << endl;
  cout << calculate.value(4) << endl;

  cout << calculate.add(1, 1) << endl;
  cout << calculate.add(2, 3) << endl;
  cout << calculate.add(4, 2) << endl;

  cout << calculate.subtract(1, 1) << endl;
  cout << calculate.subtract(2, 3) << endl;
  cout << calculate.subtract(4, 2) << endl;

  return 0;
}