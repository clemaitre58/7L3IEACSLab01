#include <iostream>
#include <cstdlib>

#include "problem1.h"
#include "problem2.h"
#include "problem3.h"
#include "problem4.h"
#include "problem5.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int choice = 0;
    int back = 0;
    int r = 1;

    while(back == 0)
    {
        cout << "Welcome to the Lab1 !" << endl << "Please choose a problem: ";
        cin >> choice;
        cout << endl << endl;

        if(choice == 0)
        {
            back++;
        }
        else if(choice == 1)
        {
            swap();
            compare();
            parity();
            First_x1();
            First_or_second();

            cout << "Press (0) to return to menu: ";
            cin >> r;
            if (r == 0)
            {
                system("cls");
            }
        }
        else if(choice == 2)
        {
            function();

            cout << "Tape (0) to return to menu: ";
            cin >> r;
            if (r == 0)
            {
                system("cls");
            }
        }
        else if(choice == 3)
        {
            mainSwap1();
            mainSwap2();

            cout << "Tape (0) to return to menu: ";
            cin >> r;
            if (r == 0)
            {
                system("cls");
            }
        }
        else if(choice == 4)
        {
            bubleSort();
            //quickSortMain();
           // time();


            cout << "Tape (0) to return to menu: ";
            cin >> r;
            if (r == 0)
            {
                system("cls");
            }
        }
        else if(choice == 5)
        {
            transpose();
            //transform();
            pascal();

            cout << "Tape (0) to return to menu: ";
            cin >> r;
            if (r == 0)
            {
                system("cls");
            }
        }
    }

    return 0;
}
