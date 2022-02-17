#include<iostream>
using namespace std;
class Car{
public:
string brand;
string model;
int year;

Car(string n,string m,int mf);  //constructor declaration
};

//CONSTRUCTOR DEFINATION OUTSIDE THE CLASS
Car ::Car(string n,string m,int mf){
    brand=n;
    model=m;
    year=mf;
}
int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
