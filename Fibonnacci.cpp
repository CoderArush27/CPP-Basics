//to display nth number in fibonnacci series
#include<iostream>
using namespace std;

int fib(int n){
    if(n==0)
    return 0;
    if(n==1||n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
int main(){
    cout<<fib(10);
    return 0;

}