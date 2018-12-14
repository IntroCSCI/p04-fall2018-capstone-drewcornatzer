#include "derInt.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int polynomialSize;
    vector <double> termExponents;
    vector <double> termCoefficients;
    polynomial function;
    char response;
    char response2;

    do
    {
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
        cout<<"Is this correct? (Y)es/(N)o"<<endl;
        cin>>response2;
        while(response2!='n'&&response2!='N'&&response2!='y'&&response2!='Y')
        {
            cout<<"ERROR! Type 'y' for yes or 'n' for no."<<endl;
            function.showPolynomial();
            cout<<"Is the above polynomial correct?"<<endl;
            cin>>response2;
        }
        if(response2=='n'||response2=='N')
        {
            termExponents.clear();
            termCoefficients.clear();
            function.clearPolynomial();
        }
    }while(response2!='y'&&response2!='Y');
    cout<<"Here is it's derivative:"<<endl;
    function.findDerivative();

    char evaluate;
    cout<<"Would you like to evaluate the derivative? (Y)es/(N)o"<<endl;
    cin>>evaluate;
    while(evaluate!='y'&&evaluate!='Y'&&evaluate!='n'&&evaluate!='N')
    {
        cout<<"Error! Type 'y' for yes or 'n' for no."<<endl;
        cin>>evaluate;
    }
    if(evaluate=='y'||evaluate=='Y')
    {
        int x;
        int derValue;
        cout<<"What is the x-value?"<<endl;
        cin>>x;
        derValue=function.evaluateDerivative(x);
        cout<<"The value of the derivative when x="<<x<<" is:"<<endl;
        cout<<derValue<<endl;
    }

    return 0;
}
