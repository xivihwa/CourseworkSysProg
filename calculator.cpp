#include "calculator.h"
#include <cmath>

int Calculator::Add(double a, double b)
{
    return std::round(a + b);
}

int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}

int Calculator::Mul(double a, double b)
{
    return std::round(a * b);
}

double Calculator::Div(double a, double b)
{
    if (b != 0) {
        return a / b;
    } else {
        return std::nan("");
    }
}