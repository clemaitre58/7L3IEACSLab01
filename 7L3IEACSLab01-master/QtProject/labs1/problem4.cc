#include "problem4.h"
#include <iostream>
#include <time.h>

using std::cout;
using std::cin;
using std:: endl;

int bubleSort()
{
    cout << "Buble sort" << endl << endl;

    int i, j,tempo,pass=0;
    int array[10];

    cout << "Enter 10 element into the list :" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << "[" << i+1 << "]:   ";
        cin >> array[i];
    }
    cout << endl;

    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
           if(array[j] < array[i])
           {
              tempo = array[i];
              array[i] = array[j];
              array[j] = tempo;
           }
        }
     pass++;
     }

     cout << "Sorted Element List: " << endl;
     for(i = 0; i<10; i++)
     {
        cout << array[i] << "  ";
     }

     cout << endl << "Number of passes taken to sort the list:" << pass << endl << endl;

     return 0;
}



//void quickSort(int* table, int high, int low)
//{
//    int h = high;
//    int l = low;
//    int pivot = table[(h + l) / 2];
//    int d = 0;

//    while (l <= h)
//    {
//        while (table[l] < pivot)
//            l++;
//        while (table[h] > pivot)
//            h--;
//        if (l <= h)
//        {
//            d = table[h];
//            table[l] = table[h];
//            table[h] = d;
//            l++;
//            h--;
//        }
//    }
//    if (h > low)
//        quickSort(table, low, h);
//    if (l < high)
//        quickSort(table, l, high);
//}

//int quickSortMain()
//{
//    int array[10];
//    for (int s = 0; s < 10; s++)
//    {
//        cout << "Enter le terme " << s+1 << " du tableau: ";
//        cin >> array[s];
//    }

//    int f = sizeof(array) / sizeof(array[0]);


//    cout << "Avant le QuickSort :" << endl;
//    for (int a = 0; a < f; a++)
//    {
//        cout << array[a] << " ";
//    }
//    quickSort(array, 0, f);

//    cout << endl << "Apres le QuickSort :" << endl;
//    for (int a = 0; a < f; a++)
//    {
//        cout << array[a] << " ";
//    }

//    cout << endl << endl;
//    return (0);
//}

//void time()
//{
//    clock_t start, end;
//    double temps;

//    start = clock();
//    end=clock();
//    temps = (double)(end - start)/CLOCKS_PER_SEC/10000;
//    cout << temps << " milli-secondes entre start et end." << endl << endl;
//}

