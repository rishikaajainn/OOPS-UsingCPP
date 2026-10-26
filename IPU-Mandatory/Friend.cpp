#include <iostream>
using namespace std;
class Memory;
class CPU{
    float utilization;
public:
    CPU(float c){
        utilization=c;
    }
    friend void check(CPU,Memory);
};
class Memory{
    float utilization;
public:
    Memory(float m){
        utilization=m;
    }
    friend void check(CPU,Memory);
};
void check(CPU c,Memory m){
    if(c.utilization<m.utilization)
        cout<<"CPU-intensive task may be started."<<endl;
    else if(m.utilization<c.utilization)
        cout<<"Memory-intensive task may be started."<<endl;
    else
        cout<<"CPU and memory utilization are equal."<<endl;
}
int main(){
    float c,m;
    cout<<"Enter CPU utilization: ";
    cin>>c;
    cout<<"Enter Memory utilization: ";
    cin>>m;
    CPU cpu(c);
    Memory memory(m);
    check(cpu,memory);
    return 0;
}