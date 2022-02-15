#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;

public:
void setSalary(int s){
    salary=s;
}    
int getSalary(){
    return salary;
}
};
int main(){
    Employee E;
    E.setSalary(150000);
    cout<<"SALARY OF AN EMPLOYEE= "<<E.getSalary()<<endl;
return 0;    
}