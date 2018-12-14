#include "derInt.h"
#include <iostream>
#include <vector>
#include <cmath>

void polynomial::setPolynomial(int numberOfTerms, std::vector <double> powers, std::vector <double> numbers)
{
   terms=numberOfTerms; 
   for (int i=0; i<terms; i++)
   {
    exponents.push_back(powers[i]);
    coefficients.push_back(numbers[i]);
   }
}
void polynomial::setConstant(double constant)
{
    constantTerm=constant; 
}

void polynomial::clearPolynomial()
{
    for(int i=0;i<terms;i++)
    {
        exponents.pop_back();
        coefficients.pop_back();
    }
    constantTerm=0;
}

void polynomial::showPolynomial()
{
    for(int i=0;i<terms;i++)
    {
        int lastTerm=terms-1;
        if(i<lastTerm)
        {
            std::cout<<coefficients[i]<<"x^{"<<exponents[i]<<"} + ";
        }
        else
        {
            std::cout<<coefficients[i]<<"x^{"<<exponents[i]<<"}";
            
            if(constantTerm!=0)
            {
                std::cout<<" + "<<constantTerm<<std::endl;
            }
            else
            {
                std::cout<<std::endl;    
            }
        }
    }
}

void polynomial::findDerivative()
{
        std::vector <double> derExponents;
        std::vector <double> derCoefficients;
        double derExp;
        double derCo;

        for(int i=0;i<terms;i++)
        {
            derExp=exponents[i]-1;
            derCo=exponents[i]*coefficients[i];
            derCoefficients.push_back(derCo);
            derExponents.push_back(derExp);
        }
        
        for(int i=0;i<terms;i++)
        {
            int lastTerm=terms-1;
            if(i<lastTerm)
            {
                if(derExponents[i]==0)
                {
                    std::cout<<derCoefficients[i]<<" + ";
                }
                else if(derExponents[i]==1)
                {
                    std::cout<<derCoefficients[i]<<"x + ";
                }
                else
                {
                    std::cout<<derCoefficients[i]<<"x^{"<<derExponents[i]<<"} + ";
                }
            }
            else
            {
                if(derExponents[i]==0)
                {
                    std::cout<<derCoefficients[i]<<std::endl;
                }
                else if(derExponents[i]==1)
                {
                    std::cout<<derCoefficients[i]<<"x"<<std::endl;
                }
                else
                {
                    std::cout<<derCoefficients[i]<<"x^{"<<derExponents[i]<<"}";
                    std::cout<<std::endl;
                }
            }
        }
}

double polynomial::evaluateDerivative(double xValue)
{
        std::vector <double> derivativeExponents;
        std::vector <double> derivativeCoefficients;
        double derExp;
        double derCo;
        double derivativeValue=0;

        for(int i=0;i<terms;i++)
        {
            derExp=exponents[i]-1;
            derCo=exponents[i]*coefficients[i];
            derivativeCoefficients.push_back(derCo);
            derivativeExponents.push_back(derExp);
        }

        for(int i=0;i<terms;i++)
        {
            if(derivativeExponents[i]==0)
            {
                derivativeValue+=derivativeCoefficients[i];
            }
            else
            {
                derivativeValue+=derivativeCoefficients[i]*pow(xValue,derivativeExponents[i]);
            }
        }

        return derivativeValue;
}
