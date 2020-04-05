#include <iostream>
#include "problem4.h"
#include <chrono>
using namespace std::chrono;

//==========BUBBLE SORT==========//
void bubblesort(){
    auto start = high_resolution_clock::now(); //initializing time counter
    std::cout << "===PROBLEM 4====" << "\n1. Bubble Sort - Dynamics Array - 10 elements\n" << std::endl;
    //allocating block of memories dynamically
    int temp;
    int n = 10;
    int *q = new int[n];

    //inputing value of each element in dynamic array
    for (int i=0; i<n; i++){
        std::cout << "Enter value " << i+1 << " : ";
        std::cin >> q[i];
    }

    //swapping every pair of element
    for(int i=0; i<10; i++) {
        for(int j=i+1; j<10; j++){
            if(q[j] < q[i]) {
                temp = q[i];
                q[i] = q[j];
                q[j] = temp;
            }
        }
        //passing++;
    }


    //displaying sorted dynamic array
    std::cout << "Sorted elements: " << std::endl;
    for(int i=0; i<10; i++) {
        std::cout << q[i] << "\t";
    }
    auto stop = high_resolution_clock::now(); //terminating time counter
    auto duration = duration_cast<microseconds>(stop-start); //obtaining time interval
    std::cout << "\nTime elapsed by the program: " << duration.count() << " u sec" << std::endl;
}

//==========QUICKSORT==========//
int swapquicksort(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int pivoting(int array[], int low, int high){
    int pivot = array[high]; //stating pivot
    int i = (low-1); //index of smaller element

    for(int j = low; j <=  high-1; j++){
        if(array[j] < pivot){
            i++;
            swapquicksort(&array[i], &array[j]); //swapping the left side of pivot
        }
    }
    swapquicksort(&array[i+1], &array[high]); //swapping the right side of pivot
    return(i+1);
}
void sorting(int array[], int low, int high){
    if(low < high){
        int indexp = pivoting(array, low, high); //indexp is partition index

        sorting(array, low, indexp-1);
        sorting(array, indexp+1, high);
    }
}
void quicksort(){
    //allocating block of memories dynamically
    auto start = high_resolution_clock::now();
    std::cout << "\n2. Quick Sort - Dynamics Array - 10 elements" << std::endl;
    int n = 10;
    int *q = new int[n];

    //inputing each element
    for (int i=0; i<n; i++){
        std::cout << "Enter value " << i+1 << " : ";
        std::cin >> q[i];
    }

    //sorting
    sorting(q, 0, n-1);

    //displaying sorted dynamic array
    std::cout << "Sorted elements: " << std::endl;
    for(int i=0; i<10; i++) {
        std::cout << q[i] << "\t";
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    std::cout << "\nTime elapsed by the program: " << duration.count() << " u sec" << std::endl;

    std::cout << "===End of PROBLEM 4===\n\n" << std::endl;
}
