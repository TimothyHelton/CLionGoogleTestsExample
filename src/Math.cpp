
#include "Math.h"

Math::Math(double a, double b) : a(a), b(b) {}

double Math::getA() const {
  return a;
}

void Math::setA(double a) {
  Math::a = a;
}

double Math::getB() const {
  return b;
}

void Math::setB(double b) {
  Math::b = b;
}
