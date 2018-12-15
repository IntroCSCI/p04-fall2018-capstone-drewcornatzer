# Capstone Description

This program calculates the derivative of any polynomial the user enters and,
if the user wishes, will evaluate the derivative for any x-value givem.

# Getting Started

To compile: g++ main.cpp derInt.cpp
To run: ./a.out

# REQUIREMENTS

The project uses the following components to demonstrate appropriate use of the concepts learned in class.

## Input/Output

[main.cpp lines 19-48] (main.cpp#L19)

I created a do-while loop that takes in number of terms in the polynomial,
stores a constant (if the user says there is one), and the coefficients 
and exponents of each term. It then displays the polynomial entered by the user.
The loop runs until the user replies that the polynomial displayed is correct.

## Control Flow

[derInt.cpp lines 73-103] (derInt.cpp#L73)

I created nested if statements inside a for-loop that runs through each term of the polynomial to first, evaluate if the term being displayed is the last term
of the polynomial, and second, the exponent of each term of the polynomial.
If the term is the last term, it is followed by an endline. The exponent of
each term is evaluated to determine whether to display just x, x raised to a 
power, or no x at all.

## Data Structure/Source

[main.cpp lines 31-41] (main.cpp L#31)

I created two vectors to store the values of each term's coefficient and 
exponent. These are then passed to the serPolynomial function to define
the polynomial that was entered.

## Function

[derInt.cpp lines 6-14] (derInt.cpp L#6) 

This void function takes an integer and two vectors of doubles in as parameters to define the polynomial's number of terms and then each term's coefficients andexponents. It then sets up the polynomial. 

[derInt.cpp lines 55-104] (derInt.cpp L#55) 

Thid void function calculates the derivative of each term of the polynomial,
one by one, and displays it to the user. 

[derInt.cpp lines 107-133] (derInt.cpp L#107)

This function goes through each term and calculates its derivative evaluated
at an x-value that was entered by the user. It returns a double that is equal toteh sum of the derivative of each term added up. 

## Class

The derInt.h and the derInt.cpp files define the polynomial class and its 
functions. The class consistes of 2 vectors, 1 int, and 1 double. One 
vector stores each term's exponents. The other vector stores each term's 
coefficients. The integer stores the number of terms in the polynomial. 
The double identifies whether there is a constant in the polynomial, and
is assigned an initial 0 value for when the polynomial does not have 
a constant term. 
