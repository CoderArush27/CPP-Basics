#include<iostream>
using namespace std;
int main(){
    int a = 20;
    int *p1 = &a;
    int **p2 = &p1;

    cout<<"VALUE OF a "<<a<<endl;
    cout<<"ADDRESS AT p1 "<<p1<<endl;
    cout<<"VALUE AT *p1 "<<*p1<<endl;
    cout<<"ADRESS AT P2 "<<p2<<endl;
    cout<<"ADDRESS VALUE AT *P2 "<<*p2<<endl;
    cout<<"VALUE OF **P2 "<<**p2<<endl;
     

}