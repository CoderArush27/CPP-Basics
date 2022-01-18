#include<iostream>
using namespace std;
int main(){
    int a=50;
    int b=100;
    int c=150;
    int *p1=&a;
    int *p2=&b;
    int *p3=&c;
    cout<<"ADDRESS OF a = "<<p1<<endl;
    cout<<"VALUE OF a = "<<*p1<<endl;
    cout<<"ADDRESS OF b = "<<p2<<endl;
    cout<<"VALUE OF b = "<<*p2<<endl;
    cout<<"ADDRESS OF c = "<<p3<<endl;
    cout<<"VALUE OF c = "<<*p3<<endl;
return 0;
}