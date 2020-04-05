#include "problem1.h"
#include <iostream>;
#include <string>;


// Swapping variables
int swapp(int num1, int num2){
int t =num1;
num1=num2;
num2=t;
std::cout<<"num1="<<num1<< ",num2="<<num2;
}

// checking for sign change
int sign_change(int num1, int num2){
if (num1>0&& num2<0)
    std::cout<<"different sign";
else
    std::cout<<"same sign";
}


//checking even or odd
int finding_odd_even(int num){
if(num%2==0)
    std::cout<<num<<"--is even"<<std::endl;
else
    std::cout<<num<<"--is odd"<<std::endl;

}


// printing "first" , "second"  by choice
int first()
{
    for(int i =0;i<3;i++)

    std::cout<<"First"<<std::endl;

}


int second()
{
    for(int i =0;i<2;i++)

    std::cout<<"Second\n";

}
