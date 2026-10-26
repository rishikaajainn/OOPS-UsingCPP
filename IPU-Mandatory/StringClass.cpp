#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
class String{
    char str[100];
public:
    String(){
        str[0]='\0';
    }
    String(const char s[]){
        strcpy(str,s);
    }
    String operator+(String s){
        String result;
        strcpy(result.str,str);
        strcat(result.str,s.str);
        return result;
    }
    String& operator=(const String& s){
        if(this!=&s)
            strcpy(str,s.str);
        return *this;
    }
    bool operator<=(String s){
        return strcmp(str,s.str)<=0;
    }
    void length(){
        cout<<"Length: "<<strlen(str)<<endl;
    }
    void toLower(){
        for(int i=0;str[i]!='\0';i++)
            str[i]=tolower((unsigned char)str[i]);
    }
    void toUpper(){
        for(int i=0;str[i]!='\0';i++)
            str[i]=toupper((unsigned char)str[i]);
    }
    void display(){
        cout<<str<<endl;
    }
};
int main(){
    String s1("Hello"),s2("World"),s3;
    cout<<"First string: ";
    s1.display();
    cout<<"Second string: ";
    s2.display();
    s3=s1+s2;
    cout<<"Concatenated string: ";
    s3.display();
    s3.length();
    s3.toLower();
    cout<<"Lowercase: ";
    s3.display();
    s3.toUpper();
    cout<<"Uppercase: ";
    s3.display();
    if(s1<=s2)
        cout<<"First string is less than or equal to second string."<<endl;
    else
        cout<<"First string is greater than second string."<<endl;
    return 0;
}