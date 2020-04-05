#include <iostream>
#include <string>

#include "problem1.h"
#include "problem2.h"
#include "problem3.h"
#include "problem4.h"
#include "problem5.h"


int main()
{
    std::string mystring = "BSCV COMPUTER SCIENCE - LAB01";
    std::cout << mystring << std::endl;

    /*Problem 1*/

    question1();
    question2();
    question3();
    question4();
    question5();


    /*Problem 2*/
    problem2();

    /*Problem 3*/
    swapversion1();
    swapversion2();

    /*Problem 4*/
    bubblesort();
    quicksort();

    /*Problem 5*/
    transpose();
    flatten();
    pascaltriangle();


    return 0;
}
