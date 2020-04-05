#include "problem2.h"
#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

double function()
{
    cout << "Compute the values of f(x)=sin(x)+ln(x) where x=[1:10]: " << endl;

    for (double i = 0; i < 11; i++)
    {
        double f =sin(i)+log(i);
        cout << "[" << i << "]:    " << f << endl;
    }
    cout << endl;
    return 0;
}
