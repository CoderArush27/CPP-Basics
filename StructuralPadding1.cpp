/*AS THIS CLASS SHOULD OCCUPY 14BYTES BUT IT OCCUPIES 16 BYTES BECAUSE OF STRUCTURAL PADDING*/ 
#include<iostream>
using namespace std;
class StructuralPadding1{
int a;
char c;
double b;
};
int main(){
    StructuralPadding1 D;
    cout<<sizeof(D);
return 0;
}