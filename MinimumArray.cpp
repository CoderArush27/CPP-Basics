#include<iostream>
using namespace std;
void minimum(int x[]){
    int min=x[0];
    for(int i=0;i<5;i++){
        if(x[i]<min)
            min=x[i];
    }
    cout<<"MINIMUM NUMBER "<<min;
}
int main(){
    int arr[5]={98,20,35,1151,619};
    minimum(arr);
return 0;    
}