#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "calc.h"

using namespace std;

int main()
{
    Calculator calc;

    int sel;

    cout << "1) Arithmetic Operations\n2) Power Functions\n3) Trigonometric Functions\n4) Exponential and Logarithmic Functions" << endl;
    cin >> sel;


//Arith
    if (sel == 1)
    {

        int sel_arith;
        cout << "1) Add\n2) Sub\n3) Mult\n4) Div" << endl;
        cin >> sel_arith;

        cout << "First Value: ";
        cin >> calc.a;
        cout << "Second Value: ";
        cin >> calc.b;

        if (sel_arith == 1) {
            cout << "Add: " << calc.Add() << endl;
        }
        else if (sel_arith == 2) {
            cout << "Sub: " << calc.Sub() << endl;
        }
        else if (sel_arith == 3) {
            cout << "Mult: " << calc.Mult() << endl;
        }
        else if (sel_arith == 4) {
            cout << "Div: " << calc.Div() << endl;
        }
        else {
            cout << "NIL" << endl;
        }


    }

//Power Function
    else if (sel == 2) {

        int sel_pow;

        cout << "1) Power of X\n2)Square Root of X\n3) Cubic Root of X\n4) Hypotenuse" << endl;
        cin >> sel_pow;

        if (sel_pow == 1) {

            cout << "Base value: ";
            cin >> calc.a;
            cout << "Exponent value: ";
            cin >> calc.b;

            cout << "Power of: " << calc.Pow() << endl;
        }
        else if (sel_pow == 2) {
            cout << "X: ";
            cin >> calc.c;
            cout << "Square Root of X:" << calc.Sqrt() << endl;
        }
        else if (sel_pow == 3) {
            cout << "X: ";
            cin >> calc.c;
            cout << "Cubic Root of X: " << calc.Cbrt() << endl;
        }
        else if (sel_pow == 4) {
            cout << "Cateto A: ";
            cin >> calc.a;
            cout << "Cateto B: ";
            cin >> calc.b;
            cout << "Hypotenuse: " << calc.Hypot() << endl;
        }
        else {
            cout << "Nil" << endl;
        }

    }

//Trigonometric Functions
    else if (sel == 3) {

        int sel_trig;
        cout << "1) Sine\n2) Cosine\n3) Tangent" << endl;
        cin >> sel_trig;

        cout << "insert X in Degrees: ";
        cin >> calc.c;

        if (sel_trig == 1) {
            cout << "Sine of X: " << calc.Sin() << endl;
        }

        else if (sel_trig == 2) {
            cout << "Cosine of X:" << calc.Cos() << endl;
        }

        else if (sel_trig == 3) {
            cout << "Tangent of X:" << calc.Tan() << endl;
        }

        else {
            cout << "Nil" << endl;
        }
    }

//Exponential and logarithmic functions
    else if (sel == 4) {
        int sel_exp;
        cout << "1) Exponential Function\n2) Natural Logarithm\n3) Binary Logarithm\n4) Common (base-10) Logarithm" << endl;
        cin >> sel_exp;

        cout << "insert X: ";
        cin >> calc.c;

        if (sel_exp == 1) {
            cout << "Exponetial: " << calc.Exp() << endl;
        }

        else if (sel_exp == 2) {
            cout << "Natural Logarithm: " << calc.Ln() << endl;
        }
        else if (sel_exp == 3) {
            cout << "Binary Logarithm : " << calc.Log2() << endl;
        }

        else if (sel_exp == 4) {
            cout << "Logarithm (base-10)" << calc.Log10() << endl;
        }

        else {
            cout << "Nil" << endl;
        }
    }

    else {
        cout << "END" << endl;
        system("pause");
    }

}
