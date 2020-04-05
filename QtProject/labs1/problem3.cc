#include "problem3.h"
#include <iostream>;

int* swapp(int num1, int num2){
int t =num1;
num1=num2;
num2=t;
std::cout<<"integer_1="<<num1<<",integer_2="<<num2<<std::endl;

return 0;
}


int& swapp(int num1, int num2){
int t =num1;
num1=num2;
num2=t;
std::cout<<"integer_1="<<num1<<",integer_2="<<num2<<std::endl;


}
