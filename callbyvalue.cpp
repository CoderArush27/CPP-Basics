/*in this parameter passing method values of actual parameter are copied into functions formal parameters and any changes into the formal parameter will nit be reflected into actual parameter*/
#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int a=10,b=20;
    cout<<"VALUES BEFORE SWAPPING "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"VALUES AFTER SWAPPING "<<a<<" "<<b<<endl;
    return 0;
}