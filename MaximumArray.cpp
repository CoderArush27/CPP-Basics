#include<iostream>
using namespace std;
void maximum(int x[]){
    int max=x[0];
    for(int i=0;i<5;i++){
        if(x[i]>max)
        max=x[i];
    }
    cout<<"MAXIMUM NUMBER "<<max;
}
int main(){
    int arr[5]={89,236,945,21144,3144};
    maximum(arr);
}