#include <iostream>
#include <string>

#include "problem1.h"
#include "problem2.h"
#include "problem3.h"
#include "problem4.h"
#include "problem5.h"
#define MAX_SIZE 5


int main()
{

//QUESTION 1
std::cout << "Question 1\n";
// SWAPPING VARIABLES

int a;
int b;
std::cout<<("Enter value of a : ");
std::cin>>a;
std::cout<<("\nEnter value of b : ");
std::cin>>b;
std::cout<<"\nAfter swapping"<<std::endl;
std::cout<<"a:"<<a<< "b:"<<b<< std::endl;

std::cout<<"\nBefore swapping"<<std::endl;
SwapValue(a, b);


//SAME SIGN
int num1;
int num2;

std::cout<<"Enter the First number"<<std::endl;
std::cin>>num1;

std::cout<<"Enter the Second number"<<std::endl;
std::cin>>num2;

sameSign(num1,num2);



//EVEN OR ODD
int num;
   bool isEven;
   std::cout<<"Enter any number: ";
   std::cin>>num;
   isEven = EvenOdd(num);
   if(isEven)
      std::cout<<num<<" is an even number";
   else
      std::cout<<num<<" is an odd number";



//PRINT FIRST

std::cout<<"First";

//PRINT FIRST OR Second
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

//QUESTION 2

  std::cout << "Question 2\n";

  std::cout<<"f(x)= sin(x)+ln(x)"<<std::endl;
  function();
  */

//QUESTION 4
std::cout << "Question 4\n";
//BUBBLE SORT

int arr_sort[MAX_SIZE], i;

std::cout << "\nEnter " << MAX_SIZE << " Elements for Sorting : " << std::endl;
for (i = 0; i < MAX_SIZE; i++)
    std::cin >> arr_sort[i];

std::cout << "\nYour Data   :";
for (i = 0; i < MAX_SIZE; i++) {
    std::cout << "\t" << arr_sort[i];
}



bubble_sort(arr_sort);

//QUICK SORT
    int n;
        std::cout<<"Enter number of elements: ";
        std::cin>>n;
        int a[n];
        std::cout<<"Enter the array elements:\n";
        for(int i=0;i<n;i++)
       {
    	 std::cin>>a[i];
       }
      Quicksort(a,0,n-1);
      std::cout<<"After Quick Sort the array is:\n";
      for(int i=0;i<n;i++)
      {
    	 std::cout<<a[i]<<" ";
      }


//QUESTION 5

//TRANSPOSE MATRIX

  std::cout << "Question 5\n";
    int matrix[10][10];
     int m,n,rows,cols;
    std::cout <<"Enter Number of rows :";
     std::cin>>rows;
     std::cout<<"Enter Number Of coloumns  :";
     std::cin>>cols;
      for( m=0;m<rows;m++){
          for( n=0;n<cols;n++)
          {
              std::cin>>matrix[m][n];
          }
         }

         std::cout<<"\n Matrix You Entered\n";

      for( m=0;m<rows;m++){
          for( n=0;n<cols;n++)
          {
              std::cout<<matrix[m][n]<<"     ";
          }
          std::cout<<std::endl;
         }



     transpose(matrix,rows,cols);



   }
   void transpose(int matrix[10][10], int rows, int cols)
   {    int m,n;
    int transpose_matrix[10][10];
    std::cout<<"\n\n\nTranspose of Entered Matrix\n";
       for(m=0;m<rows;m++){
           for( n=0;n<cols;n++)
           {
               transpose_matrix[n][m]=matrix[m][n];
           }
           std::cout<<std::endl;
          }

       for(m=0;m<cols;m++){
           for( n=0;n<rows;n++)
           {
               std::cout<<transpose_matrix[m][n]<<"   ";
           }
           std::cout<<std::endl;
          }




//PASCAL TRIANGLE


	int n;

	std::cout << "Please provide the number of rows of the triangle: ";

	std::cin >> n;

	printPascal(n);

    return 0;
}
