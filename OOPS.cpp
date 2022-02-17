#include<iostream>
using namespace std;
class rectangle{
public:
int length;
int breadth;

void initialize(int l,int b){
    length=l;
    breadth=b;
}
int area(){
    return length*breadth;
}

int perimeter(){
    return 2*(length + breadth);
}
};
int main(){
    rectangle r;
    int l,b;
    cout<<"ENTER LENGTH AND BREADTH"<<endl;
    cin>>l>>b;
    r.initialize(l,b);
    cout<<"AREA OF A RECTANGLE = "<<r.area()<<endl;
    cout<<"PERIMETER OF A RECTANGLE = "<<r.perimeter()<<endl;2
}