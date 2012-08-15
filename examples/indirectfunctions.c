#include <string>
#include <iostream>

float compute(float miles,float gallons);
float computepesimist(float miles,float gallons);
float computeoptimist(float miles,float gallons);

typedef struct {
  std::string make;
  std::string model;
  float (*mileage)(float,float);
  } car;

int main() {

  car one;

  one.make="toyota";
  one.model="corolla";
  one.mileage=compute;

  std::cout << std::endl << "Regular computation" << std::endl;
  std::cout << one.make << std::endl;
  std::cout << one.model << std::endl;
  std::cout << one.mileage(150,4) << std::endl;

  std::cout << std::endl << "Pesimist computation" << std::endl;
  one.mileage=computepesimist;
  std::cout << one.make << std::endl;
  std::cout << one.model << std::endl;
  std::cout << one.mileage(150,4) << std::endl;

  std::cout << std::endl << "Optimist computation" << std::endl;
  one.mileage=computeoptimist;
  std::cout << one.make << std::endl;
  std::cout << one.model << std::endl;
  std::cout << one.mileage(150,4) << std::endl;

  return 0;
  }
