#include <iostream>

#ifndef EXAMPLE_MATH_H
#define EXAMPLE_MATH_H


class Math {
  double a, b;

public:
  //Constructor
  Math(double a, double b);


  // Getters & Setters
  double getA() const;

  void setA(double a);

  double getB() const;

  void setB(double b);


  // Addition
  double addition() {
    return a + b;
  }


  // Multiplication
  double multiply() {
    return a * b;
  }

  // Addition and Multiplication
  void additionMultiply() {
    std::cout << "Addition: " << addition() << std::endl;
    std::cout << "Multiplication: " << multiply() << std::endl;
  }

};


#endif //EXAMPLE_MATH_H
