#include <iostream>
using namespace std;
template <class T>
T square(T value){
    return value*value;
}
int main(){
    int a=5;
    float b=2.5;
    double c=4.2;
    cout<<"Square of integer: "<<square(a)<<endl;
    cout<<"Square of float: "<<square(b)<<endl;
    cout<<"Square of double: "<<square(c)<<endl;
    return 0;
}