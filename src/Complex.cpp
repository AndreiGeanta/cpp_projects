#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
}
Complex::Complex(int a, int b){
    real = a;
    imag = b;
}
Complex Complex::operator+(Complex obj){
    Complex result;
    result.real = real + obj.real;
    result.imag = imag + obj.imag;
    return result;

}
void Complex::print(){
    cout << real << " + " << imag <<"i " << endl;
}
