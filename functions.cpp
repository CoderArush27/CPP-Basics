#include<iostream>
using namespace std;
void add(int a,int b)//parameterized function
 {    
   int sum=a + b;
   cout<< a <<" + "<<b<<" = "<<sum<<endl;
}
int main(){
    add(10,20);
    add(30,40);
    add(50,60);
    return 0;
}
