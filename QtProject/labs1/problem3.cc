#include <iostream>
#include "problem3.h"

void swap1(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//pointer swapping: swap the value the pointer points to
void swapversion1()
{
    std::cout << "===PROBLEM 3===" << "\n1. Swap Version 1" << std::endl;
    int var1, var2;
    std::cout << "Enter your integer 1: "; std::cin >> var1;
    std::cout << "Enter your integer 2: "; std::cin >> var2;

    swap1(&var1, &var2);

    std::cout << "Your swapped integer 1: " << var1 << std::endl;
    std::cout << "Your swapped integer 2: " << var2 << std::endl;

}

//reference swapping: swap the address of a value in a variable
void swapversion2()
{
    std::cout << "\n2. Swap Version 2" << std::endl;
    int var1, var2;
    std::cout << "Enter your integer 1: "; std::cin >> var1;
    std::cout << "Enter your integer 2: "; std::cin >> var2;

    swap2(var1, var2);

    std::cout << "Your swapped integer 1: " << var1 << std::endl;
    std::cout << "Your swapped integer 2: " << var2 << std::endl;

    std::cout << "===End of PROBLEM 3===\n\n" << std::endl;
}
