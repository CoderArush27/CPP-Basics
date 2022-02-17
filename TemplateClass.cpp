#include<iostream>
using namespace std;
template <class T>
class Arithmetic{
private:
T a;
T b;

public:
Arithmetic(T a,T b);
    T add();
    T sub();
};
template<class T>
Arithmetic<T> :: Arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}

template<class T>
T Arithmetic<T> :: add(){
    return a+b;
}

template<class T>
T Arithmetic<T> :: sub(){
    return a-b;
}


int main(){
Arithmetic<int> A(50,60);
cout<<"ADDITION= "<<A.add()<<endl;
cout<<"ADDITION= "<<A.sub()<<endl;

Arithmetic<float> B(50.2,60.6);
cout<<"ADDITION= "<<B.add()<<endl;
cout<<"ADDITION= "<<B.sub()<<endl;
}
