#include "problem3.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Version 1
int mainSwap1()
{
    cout << "Version 1" << endl << endl;

    int a;
    int b;

    cout << "Enter 2 number: " << endl;
    cin >> a >> b;

    cout << endl << "a = " << a << endl << "b = " << b << endl;

    swap1(&a , &b);
    cout << endl << "New a = " << a << endl << "New b = " << b << endl << endl;

    return 0;
}

void swap1(int *pa , int *pb)
{
    int tempo;
    tempo = *pa;
    *pa = *pb;
    *pb = tempo;
}

// Version 2
int mainSwap2 ()
{
    cout << "Version 2" << endl << endl;

    int c;
    int d ;

    cout << "Enter 2 number: " << endl;
    cin >> c >> d ;

    cout << endl << "a = " << c << endl << "b = " << d << endl;

    swap2(c , d);
    cout << endl << "New a = " << c << endl << "New b = " << d << endl << endl;

    return 0;
}


void swap2(int &c , int &d)
{
    int tempo;
    tempo = c;
    c = d;
    d = tempo;
}
