#include<iostream>
using namespace std;

struct Rectangle{
    int l;
    int b;
};
int main(){
    struct Rectangle r1={10,20};
    cout<<sizeof(r1)<<endl;
    cout<<r1.l<<endl;
    cout<<r1.b<<endl;
    cout<<"AREA OF RECTANGLE = "<<r1.l*r1.b<<endl;
}