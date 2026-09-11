#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    Complex add(Complex c)
    {
        Complex result;
        result.real = real + c.real;
        result.img = img + c.img;
        return result;
    }

    void show()
    {
        cout << "(" << real << " + " << img << "i)" << endl;
    }
};

int main(){
    Complex c1(6, 7);
    Complex c2(4, 5);

    Complex c3 = c1.add(c2);

    cout << "First Complex Number: ";
    c1.show();

    cout << "Second Complex Number: ";
    c2.show();

    cout << "Sum: ";
    c3.show();

    return 0;
}