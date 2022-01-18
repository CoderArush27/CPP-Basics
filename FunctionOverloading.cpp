#include<iostream>
using namespace std;
int sum(int a,int b){
    int add=a+b;
    return add;
}
double sum(double a,double b){
    double add=a+b;
    return add;
}
int main(){
    cout<<sum(5,10)<<endl;
    cout<<sum(5.2646,69.246454)<<endl;
return 0;    
}