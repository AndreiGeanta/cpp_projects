#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2;
    c3.print();
}
