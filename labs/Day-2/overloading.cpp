#include <iostream>
using namespace std;

// function and operator

class Calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }
    double add(double a, double b)
    {
        return (a + b);
    }
    int add(int a, int b, int c)
    {
        return (a + b + c);
    }
};

class Complex
{
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}
    Complex operator+(Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    void display()
    {
        cout << real <<" , " << imag<< endl;
    }
    //   Complex operator-(Complex &c1,Complex &c2){
    //     Complex c3(0,0);
    //     c3.real=c1.real-c2.real;
    //     c3.imag=c1.imag-c2.imag;
    //     return c3;
    //  }
};

int main()
{

    // Calculator calc;
    // cout << "Sum(int):" << calc.add(10, 20) << endl;
    // cout << "Sum(double):" << calc.add(10.5, 20.3) << endl;
    // cout << "Sum( 3 ints):" << calc.add(10, 20, 30) << endl;


    Complex c1(3,4),c2(1,2);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}
