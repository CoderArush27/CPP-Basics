#include<iostream>
using namespace std;
//base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "POWER HORN \n" ;
    }
};

// Derived class
class Car:public Vehicle {
  public:
    string model = "Mustang";
    string mfy = "2020";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model + " " + myCar.mfy;
  return 0;
}