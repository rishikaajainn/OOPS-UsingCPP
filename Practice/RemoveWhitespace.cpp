#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin("Practice/input.txt");
    ofstream fout("Practice/output.txt");
    if(!fin||!fout){
        cout<<"Error opening file."<<endl;
        return 1;
    }
    char ch;
    while(fin.get(ch)){
        if(ch!=' '&&ch!='\t'&&ch!='\v'&&ch!='\f'&&ch!='\n'&&ch!='\r')
            fout.put(ch);
    }
    fin.close();
    fout.close();
    cout<<"Whitespace removed successfully."<<endl;
    return 0;
}