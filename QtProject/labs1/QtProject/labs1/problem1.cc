#include "problem1.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int swap()
{
    cout << "Question 1" << endl << endl;
    int a = 0;
    int b = 0;
    int tempo = 0;

    cout << "Enter 2 number: " << endl;
    cin >> a >> b;
    cout << endl << "a = " << a << endl << " b = " << b << endl;

    tempo = a;
    a = b;
    b = tempo;

    cout << endl << "New a = " << a << endl << "New b = " << b << endl << endl;
    return 0;
}

int compare()
{
    cout << endl << endl << "Question 2" << endl << endl;

    int d = 0;
    int e = 0;

    cout << "Enter 2 number: " << endl;
    cin >> d >> e;
    cout << endl << "a = " << d << " b = " << e << endl;

    if ((d >= 0 && e >= 0) || (d <= 0 && e <= 0))
    {
        cout << "Same sign." << endl << endl;
    }
    else
    {
        cout << "Different sign." << endl << endl;
    }

    return 0;
}

int parity()
{
    cout << endl << endl << "Question 3" << endl << endl;
    int f = 0;
    int g = 0;
    string pf = "undefine";
    string pg = "undefine";

    cout << "Enter 2 number: " << endl;
    cin >> f >> g;
    cout << endl << "Parity: " << endl;

    if (f%2 == 1)
    {
        pf = "odd";
    }
    else
    {
        pf = "even";
    }

    if (g%2 == 1)
    {
        pg = "odd";
    }
    else
    {
        pg = "even";
    }
    cout << f << " is " << pf << " and " << g << " is " << pg << endl;
    return 0;
}

int First_x1()
{
    cout << endl << endl << "Question 4" << endl << endl;
    cout << "first" << endl << endl;

    return 0;
}

int First_or_second()
{
    cout << endl << endl << "Question 5" << endl << endl;

    int choice = 0;
    int restart = 0;



    while(restart == 0)
    {
        cout << "Choose 1 or 2: ";
        cin >> choice;
        cout << endl;

        if(choice == 1)
        {
            for(int i = 0; i<3 ; i++)
            {
                cout << "First !" << endl;
            }
            restart++;
            cout << endl;
        }
        else if(choice == 2)
        {
            for(int i = 0; i<2 ; i++)
            {
                cout << "Second !" << endl;
            }
            restart++;
            cout << endl;
        }
    }

    return 0;
}










