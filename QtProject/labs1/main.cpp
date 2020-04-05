#include <iostream>
#include <string>
#include <time.h>;
#include <ctime>;
#include<conio.h>
#include<stdlib.h>



#include "problem1.h"
#include "problem2.h"
#include "problem3.h"
#include "problem4.h"
#include "problem5.h"



int main()
{

          // "PROBLEM 1"



    //-------------------
    // Swapping 2 variables
  // ----------------------
    std::cout<< " Swapping 2 Variables" <<std::endl;

    int a;
    int b;

    std::cout <<"Input a number for a:";
    std::cin>> a;

    std::cout<<"Input a value for b:"<< std::endl;
    std::cin>>b;


    std::cout<<"Before swapping"<<std::endl;
    std::cout<<"a="<<a<< ",b="<<b<<std::endl;


    std::cout<< "After swapping"<<std::endl;

    swapp(a,b);

return 0;
}



      //-------------------------
      //Checking the sign
      //-------------------------
     std::cout<< " Checking the sign" <<std::endl;


int a;
int b;

std::cout << "please enter a number for a:  " << std::endl;
std::cin>> a;

std::cout<< "Please enter a number for b:  "<<std::endl;
std::cin>> b;
sign_change(a,b);

    return 0;
}


      //-------------------------
      //Finding odd or even
     // -------------------------
     std::cout<< " Finding odd or even" <<std::endl;

int a;
int b;
std::cout<<"Please Enter an integer for a"<<std::endl;
std::cin>> a;

std::cout<<"Please Enter an integer for b"<<std::endl;
std::cin>> b;

finding_odd_even(a);
finding_odd_even(b);



    return 0;
}





     //----------------------
     // print first
     //-----------------------

     std::cout<< " Printing First"<<std::endl;

       std::cout<<"First"<<std::endl;





    //----------
     //Printing number of choice
   // ------------



 std::cout<< " Printing number of choice"<<std::endl;



int choice;

std::cout<<"Enter your choice to print as following:\n Press 1 to Print First 3 times\n Press 2 to Print second 2 times"<<std::endl;
std::cin>>choice;

switch(choice)
{
case 1:

    first();
    break;

case 2:
   second();
     break;

  default:
  std::cout<<"Enter valid choice";
  break;
}
  return 0;
}












      //"PROBLEM 2"

std::cout<<"f(x)= sin(x)+ln(x)"<<std::endl;
func();

return 0;
}



      // PROBLEM 3
  
  std::cout<< "Using int* "<<std::endl;

    int integer_1;
    int integer_2;

    std::cout <<"Input a number for interger_1:"<< std::endl;
    std::cin>> integer_1;

    std::cout<<"Input a value for integer_2:"<< std::endl;
    std::cin>>integer_2;


    std::cout<<"Before swapping"<<std::endl;
    std::cout<<"integer_1="<<integer_1<< ",integer_2="<<integer_2<<std::endl;


    std::cout<< "After swapping"<<std::endl;

    swapp(integer_1,integer_2);


    return 0;
}




std::cout<< "Using int& "<<std::endl;

    int integer_1;
    int integer_2;

    std::cout <<"Input a number for interger_1:"<< std::endl;
    std::cin>> integer_1;

    std::cout<<"Input a value for integer_2:"<< std::endl;
    std::cin>>integer_2;


    std::cout<<"Before swapping"<<std::endl;
    std::cout<<"integer_1="<<integer_1<< ",integer_2="<<integer_2<<std::endl;


    std::cout<< "After swapping"<<std::endl;

    swapp(integer_1,integer_2);


    return 0;
}


        //PROBLEM 4------------

        //BUBBLE SORT--------------

int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int n = sizeof(array)/sizeof(array[0]);

  std::cout << "Before Bubble Sort :" << std::endl;
  PrintArray(array, n);

  BubbleSort(array, n);

  std::cout << "After Bubble Sort :" << std::endl;
  PrintArray(array, n);
  return (0);
}














    //PROBLEM 5

//TRANSPOSE A MATRIX

int matrix[6][6];
    int a;
    int b;
    int rows;
    int cols;


      std::cout<<"Enter Number of Rows :";
      std::cin>>rows;

      std::cout<<"Enter Number Of Columns  :";
      std::cin>>cols;
       std::cout<<"Enter the values for your Columns and Rows:"<<std::endl;
       for( a=0;a<rows;a++){
           for( b=0;b<cols;b++)
           {
               std::cin>>matrix[a][b];
           }
          }

          std::cout<<"\n Matrix You Entered\n";

       for( a=0;a<rows;a++){
           for( b=0;b<cols;b++)
           {
               std::cout<<matrix[a][b]<<"     ";
           }
           std::cout<<std::endl;
          }



      calculate_transpose(matrix,rows,cols);



    }

 void calculate_transpose(int matrix[6][6], int rows, int cols)
{    int a;
     int b;
     int transpose_matrix[6][6];
    std::cout<<"\n\n\nTranspose of Entered Matrix\n";
       for(a=0;a<rows;a++){
           for( b=0;b<cols;b++)
           {
               transpose_matrix[b][a]=matrix[a][b];
           }

          };

       for(a=0;a<cols;a++){
           for( b=0;b<rows;b++)
           {
               std::cout<<transpose_matrix[a][b]<<"   ";
           }
            std::cout<<std::endl;
          }

}

 //TRANSFORM A MATRIX INTO A MONO DIMENSIONAL



     //PASCAL TRIANGLE

    int a;
    int b;
    int c;




    for(a=0;a<1;++a)
    {

        for(b=1;b<=(1-a-1);++b)
        {
            std::cout<<" ";
        }


        for(c=0;c<=a;++c)
        {
             std::cout<<fact(a)/(fact(a-c)*fact(c))<<" ";
        }

        std::cout<<std::endl;
    }

    return 0;
}



