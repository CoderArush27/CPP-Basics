/* A method in which a function called inside the same function*/
/*sum of n natural number using recursion*/
#include<iostream>
using namespace std;

int add(int n){
    if(n<=1)              //BASE CONDITION
    return 1;
    else
    return n+add(n-1);
}
int main(){
    cout<<add(5);
    return 0;
}