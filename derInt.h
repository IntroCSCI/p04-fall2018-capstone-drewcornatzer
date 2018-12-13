#ifndef _DERINT_H_
#define _DERINT_H_
#include <vector>
#include <iostream>

class polynomial
{
    private:
    std::vector <double> exponents;
    std::vector <double> coefficients;
    int terms;

    public:
    void setPolynomial(int, std::vector <double>, std::vector <double>);
    void showPolynomial();
};








#endif
