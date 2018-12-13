#include "derInt.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int polynomialSize;
    vector <double> termExponents;
    vector <double> termCoefficients;
    polynomial function;
        
    cout<<"How many terms does the polynomial have?"<<endl;
    cout<<"WARNING: Do not include constants."<<endl;
    cin>>polynomialSize;
    for(int i=0;i<polynomialSize;i++)
    {
        double exponent;
        double coefficient;
        cout<<"Term "<<i+1<<": What is the coefficient?"<<endl;
        cin>>coefficient;
        cout<<"Term "<<i+1<<": What is the exponent?"<<endl;
        cin>>exponent;
        termExponents.push_back(exponent);
        termCoefficients.push_back(coefficient);
    }

    function.setPolynomial(polynomialSize, termExponents, termCoefficients);
    cout<<"Here is the polynomial you entered:"<<endl;
    function.showPolynomial();
    cout<<endl;

    return 0;
}
