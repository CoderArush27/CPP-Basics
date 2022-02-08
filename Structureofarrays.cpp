#include<iostream>
using namespace std;

struct Employee{
    char name[25];
    int package;
    char dep[25];
    int id;
};
int main(){
    struct Employee E1[5]={
    {"ARUSH",5000000,"SOFTWAREDEP",1678},
    {"ASHISH",2500000,"SOFTWAREDEP",1665},
    {"ADDY",10000000,"SOFTWAREDEP",1669},
    {"ADITI",2000000,"SOFTWAREDEP",1623},
    {"BHANU",500000,"SOFTWAREDEP",1675} };

for(int i=0;i<5;i++){
    cout<<E1[i].package<<endl;
}
return 0;
}