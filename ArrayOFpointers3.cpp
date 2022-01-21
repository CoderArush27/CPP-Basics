#include<iostream>
using namespace std;
int main(){
    int arr1[5]={10,20,30,40,50};
    int *arr2[5]; //ARRAY OF POINTER
    ;
    for(int j=0;j<5;j++){
        arr2[j]=&arr1[j];  //Array of pointer stores the address of each variable of arr1
    }
    for(int k=0;k<5;k++){  //printing
        cout<<*arr2[k]<<endl;
    }
}