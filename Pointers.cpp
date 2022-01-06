/*A pointer is a variable the stores the address of another variable*/
#include<iostream>
using namespace std;
int main(){
    int *p;   //Declaring an integer pointer
    string *d;  //Declaring an string pointer
    int a = 10;
    string b = "LehLadhak";
    p = &a;
    d = &b;
    cout<<"ADDRESS OF a = "<<p<<endl;
    cout<<"VALUE OF a = "<<*p<<endl;
    cout<<"ADDRESS OF B = "<<d<<endl;
    cout<<"VALUE OF a = "<<*d<<endl;
    
    return 0;
}