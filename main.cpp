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
    char response;

    cout<<"How many terms does the polynomial have?"<<endl;
    cin>>polynomialSize;
    cout<<"Is there a constant term? (Y)es/(N)o"<<endl;
    cin>>response;
    if(response=='Y'||response=='y')
    {
        double constant;
        cout<<"What is the constant?"<<endl;
        cin>>constant;
        function.setConstant(constant);
        polynomialSize--;
    }
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
    cout<<"Here is it's derivative:"<<endl;
    function.findDerivative();

    return 0;
}
