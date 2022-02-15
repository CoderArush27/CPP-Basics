#include<iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int breadth;

rectangle(int l,int b){
    length=l;
    breadth=b;
}
int area(){
    return length*breadth;
}
void change(int k){
    length=k;
}
};
int main(){
    rectangle r(10,20);
    cout<<r.area()<<endl;
    r.change(26);
    cout<<r.length<<endl;
    cout<<r.area()<<endl;

}