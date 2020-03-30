//WAP to overload + operator to perform addition of two object

#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{
    int real;
    int img;

    public:
        Complex();
        Complex(int r,int i);
        void show();
        Complex operator+(Complex obj);
};

Complex::Complex()
{
    real=0;
    img=0;
}
Complex::Complex(int r,int i)
{
    real=r;
    img=i;
}

void Complex:: show()
{
    cout<<real<<"+"<<img<<"i";
}

Complex Complex ::operator+(Complex obj)
{
    Complex temp;

    temp.real=real+obj.real;
    temp.img=img+obj.img;

    return temp;
}

int main()
{
    Complex c1(3,5);
    Complex c2(6,7);
    Complex c3;

    c3=c1+c2;

    cout<<"\nc1=";
    c1.show();

    cout<<"\nc2=";
    c2.show();

    cout<<"\nc3=";
    c3.show();

    getch();
    return 0;

}