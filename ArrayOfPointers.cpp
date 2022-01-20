/* In c++ programming language array and pointers are closely realeated to each other*/
/* The name of an array is a pointer that stores the address of first element of an array*/
#include<iostream>
using namespace std;
int main(){
    int *ptr;
    int arr[10];
    cout<<"ENTER THE ARRAY ELEMENTS"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    ptr=arr;
    cout<<*arr<<endl;
    cout<<*ptr<<endl;

return 0;
}