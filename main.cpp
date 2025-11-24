#include <iostream>

#include "src/hello.hpp"

using namespace std;

int main()
{
  //same as example output
  TriangleNumberCalculator calculate;
  cout << calculate.value(1) << endl;
  cout << calculate.value(2) << endl;
  cout << calculate.value(4) << endl << endl;

  cout << calculate.add(1, 1) << endl;
  cout << calculate.add(2, 3) << endl;
  cout << calculate.add(4, 2) << endl << endl;

  cout << calculate.subtract(1, 1) << endl;
  cout << calculate.subtract(2, 3) << endl;
  cout << calculate.subtract(4, 2) << endl << endl;

  cout << calculate.multiply(1, 1) << endl;
  cout << calculate.multiply(2, 3) << endl;
  cout << calculate.multiply(4, 2) << endl << endl;

  cout << calculate.divide(1, 1) << endl;
  cout << calculate.divide(2, 3) << endl;
  cout << calculate.divide(4, 2) << endl << endl;
  //should be error
  cout << calculate.divide(4, 0) << endl << endl;

  return 0;
}