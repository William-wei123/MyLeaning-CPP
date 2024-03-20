#ifndef COMPLEX__H__
#define COMPLEX__H__
#include <iostream>
using namespace std;
class Complex
{
private:
    /* data */
    int real_;
    int imag_;
public:
    Complex(int real, int imag);
    Complex operator+(Complex& other);
    Complex& ADD(Complex& N1);
    // friend Complex operator+(Complex& other1, Complex& other2);
    void Display();

    ~Complex();
};

Complex::Complex(int real, int imag):real_(real),imag_(imag)
{
}

Complex::~Complex()
{
}

Complex Complex::operator+(Complex& other){
    cout<<"Complex operator"<<endl;
    int i = real_ + other.real_;
    int t_ = imag_ + other.imag_;
    return Complex(i,t_);

}
// Complex operator+(Complex& other1, Complex& other2){
//     cout<<"friend operator"<<endl;
//     int i = other1.real_ + other2.real_;
//     int t_ = other1.imag_ + other2.imag_;
//     return Complex(i,t_);

// }
Complex& Complex::ADD(Complex& N1){
    cout<<"Complex ADD"<<endl;
    real_ += N1.real_;
    imag_ += N1.imag_;
    return *this;
}

void Complex::Display(){
    cout<<real_<<","<<imag_<<endl;
}



#endif