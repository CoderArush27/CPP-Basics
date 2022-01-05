/*in this type of parameter passing method adress of formal and actual parameters are same so any changes made to formal parameters will be reflected in formal parameters*/
#include<iostream>
using namespace std;
void swappointers(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=20,b=30;
    cout<<"VALUES BEFORE SWAPPING "<<a<<" "<<b<<endl;
    swappointers(&a,&b);
    cout<<"VALUES AFTER SWAPPING "<<a<<" "<<b<<endl;

    return 0;
}