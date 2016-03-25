#include <cmath>
#include <stdlib.h>

using namespace std;

class Calculator {

public:

    //fields
    float a,b,c;
    //methods Arith
    float Add();
    float Sub();
    float Mult();
    float Div();
    //methods Power
    float Pow();
    float Sqrt();
    float Cbrt();
    float Hypot();
    //methods Trigonometric
    float Sin();
    float Cos();
    float Tan();
    //methods Exponential and Logarithmic
    float Exp();
    float Ln();
    float Log2();
    float Log10();
    //constructor
    Calculator() {

        a = 0;
        b = 0;
        c = 0;
    }

};

// Arithmetic Operations
float Calculator::Add()
{
    return a+b;
}
float Calculator::Sub()
{
    return a-b;
}
float Calculator::Mult()
{
    return a*b;
}
float Calculator::Div()
{
    return a/b;
}

//Power Function
float Calculator::Pow()
{
    return pow(a,b);
}

float Calculator::Sqrt()
{
    return sqrt(c);
}

float Calculator::Cbrt()
{
    return cbrt(c);
}

float Calculator::Hypot()
{
    return hypot(a,b);
}

//Trigonometric Functions
float Calculator::Sin()
{
    return sin(c*M_PI/180);
}

float Calculator::Cos()
{
    return cos(c*M_PI/180);
}

float Calculator::Tan()
{
    return tan(c*M_PI/180);
}

//Exponential and Logarithmic Functions
float Calculator::Exp()
{
    return exp(c);
}

float Calculator::Ln()
{
    return log(c);
}

float Calculator::Log2()
{
    return log2(c);
}

float Calculator::Log10()
{
    return log10(c);
}





