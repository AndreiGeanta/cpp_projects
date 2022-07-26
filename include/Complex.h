#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    public:
        Complex();
        Complex(int, int);
        Complex operator+(Complex);
        void print();
    protected:

    private:
        int real;
        int imag;
};

#endif // COMPLEX_H
