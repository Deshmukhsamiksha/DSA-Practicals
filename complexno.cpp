#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
    //default constructor
    complex()
    {
        real=0;
        imag=0;
    }
    //parameterized constructor
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    //distructor
    ~complex(){}
    //display function
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    complex operator+(complex c)
    {
        return complex(real+c.real,imag+c.imag);
    }
    complex operator-(complex c)
    {
        return complex(real-c.real,imag-c.imag);
    }
    complex operator*(complex c)
    {
        float r=real*c.real-imag*c.imag;
        float i=real*c.imag+imag*c.real;
        return complex(r,i);
    }
};

int main()
{
    complex c1(4,5),c2(2,3);
    cout<<"\nFirst complex number:";
    c1.display();
    cout<<"\nSecond complex number:";
    c2.display();

    complex sum=c1+c2;
    cout<<"\nSum:";
    sum.display();

    complex Difference=c1-c2;
    cout<<"\nDifference:";
    Difference.display();

    complex Product=c1*c2;
    cout<<"\nProduct:";
    Product.display();

    return 0;

}

/*output:
PS C:\DSA Practicals> g++ complexno.cpp -o complexno
PS C:\DSA Practicals> .\complexno.exe

First complex number:4+5i

Second complex number:2+3i

Sum:6+8i

Difference:2+2i

Product:-7+22i
*/