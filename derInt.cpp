#include "derInt.h"
#include <iostream>
#include <vector>

void polynomial::setPolynomial(int numberOfTerms, std::vector <double> powers, std::vector <double> numbers)
{
   terms=numberOfTerms; 
   for (int i=0; i<terms; i++)
   {
    exponents.push_back(powers[i]);
    coefficients.push_back(numbers[i]);
   }
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
        std::cout<<coefficients[i]<<"x^{"<<exponents[i]<<"}"<<std::endl;
     }
    }
}
