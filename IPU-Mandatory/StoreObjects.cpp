#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class Student{
    char name[50],sex[10];
    int age;
    float height,weight;
public:
    void readData(){
        cout<<"Enter name: ";
        cin.ignore();
        cin.getline(name,50);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter sex: ";
        cin>>sex;
        cout<<"Enter height: ";
        cin>>height;
        cout<<"Enter weight: ";
        cin>>weight;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Sex: "<<sex<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Weight: "<<weight<<endl;
    }
};
int main(){
    Student s;
    s.readData();
    ofstream out("student.dat",ios::binary);
    if(!out){
        cout<<"Error opening file."<<endl;
        return 1;
    }
    out.write(reinterpret_cast<char*>(&s),sizeof(s));
    out.close();
    Student s2;
    ifstream in("student.dat",ios::binary);
    if(!in){
        cout<<"Error reading file."<<endl;
        return 1;
    }
    in.read(reinterpret_cast<char*>(&s2),sizeof(s2));
    cout<<"\nStudent details retrieved from file:"<<endl;
    s2.show();
    in.close();
    return 0;
}