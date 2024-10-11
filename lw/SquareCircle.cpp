#include <iostream>
#include "SquareCircle.h"

using namespace std;

SquareCircle::SquareCircle(double a1, double d1) : Square(a1), Circle(d1)
{
}

void SquareCircle::Test() 
{
    if (d <= a) 
    {
        cout << "fit in" << endl;
    }
    else 
    {
        cout << "doesn't fit in" << endl;
    }
}
