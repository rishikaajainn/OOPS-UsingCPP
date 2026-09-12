#include <iostream>
using namespace std;
class LIST{
public:
    virtual void store(int value)=0;
    virtual void retrieve()=0;
};
class stack:public LIST{
    int arr[10];
    int top;
public:
    stack(){
        top=-1;
    }
    void store(int value){
        arr[++top]=value;
    }
    void retrieve(){
        cout<<"Stack element: "<<arr[top--]<<endl;
    }
};
class queue:public LIST{
    int arr[10];
    int front,rear;
public:
    queue(){
        front=0;
        rear=-1;
    }
    void store(int value){
        arr[++rear]=value;
    }
    void retrieve(){
        cout<<"Queue element: "<<arr[front++]<<endl;
    }
};
int main(){
    stack s;
    queue q;
    s.store(10);
    s.store(20);
    s.store(30);
    cout<<"Stack:"<<endl;
    s.retrieve();
    s.retrieve();
    s.retrieve();
    q.store(10);
    q.store(20);
    q.store(30);
    cout<<"Queue:"<<endl;
    q.retrieve();
    q.retrieve();
    q.retrieve();
    return 0;
}