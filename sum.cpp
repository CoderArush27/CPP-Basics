#include<iostream>
using namespace std;
int c=0;
void sum(int *a,int *b){
    c = *a+*b;
}
int main(){
    int x=10,y=20;
    sum(&x,&y);
    cout<<"SUM "<<c<<endl;
return 0;
}