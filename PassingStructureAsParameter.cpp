#include<iostream>
using namespace std;
struct rectangle 
{
int l;
int b;
};
int area(struct rectangle r1){
    return r1.l*r1.b;
}
int main(){
    struct rectangle r={26,28};
    cout<<"AREA OF A RECTANGLE = "<<area(r)<<endl;
return 0;    
}