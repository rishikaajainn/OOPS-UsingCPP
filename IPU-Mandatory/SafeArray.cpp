#include <iostream>
using namespace std;
class SafeArray{
    int arr[10];
public:
    void set(int index,int value){
        if(index<0||index>=10)
            throw index;
        arr[index]=value;
    }
    int get(int index){
        if(index<0||index>=10)
            throw index;
        return arr[index];
    }
};
int main(){
    SafeArray a;
    try{
        a.set(2,50);
        a.set(5,100);
        cout<<"Value at index 2: "<<a.get(2)<<endl;
        cout<<"Value at index 5: "<<a.get(5)<<endl;
        cout<<"Value at index 10: "<<a.get(10)<<endl;
    }
    catch(int index){
        cout<<"Exception: Invalid array index "<<index<<endl;
    }
    return 0;
}