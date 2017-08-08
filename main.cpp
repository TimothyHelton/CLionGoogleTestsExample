#include <iostream>

#include "Math.h"


int main() {
  Math math(5., 7.);
  math.additionMultiply();

  math.setA(10.);
  math.setB(9.);
  math.additionMultiply();

  return 0;
}