#include "problem5.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int transpose()
{
    cout << "Question 1" << endl << endl;

    int transpose[10][10], r = 3, c = 2, i, j;

    int a[3][3] = { {1, 2} , {3, 4} , {5, 6} };

    cout << "The matrix is: " << endl;

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    }
    cout << "The transpose of the matrix is: " << endl;

    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < r; ++j)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}


int transform()
{
    cout << "Question 2" << endl << endl;

    int array[9];

    cout << "Enter 9 element into the matrix:" << endl;
    for(int i = 0; i < 9; i++)
    {
        cout << "[" << i+1 << "]:   ";
        cin >> array[i];
    }

    int tempo[10][10];
    int rows = 0;

    cout << endl << "Enter rows you want in mono dimention array: ";
    cin >> rows;

    if(9 % rows != 0)
    {
        cout << endl << "Can't creat mono dimension array. Size is not multiple Rows";
    }
    else
    {
        cout << array << endl;
        int i = 9/rows;
        int j = 9/i;
        cout << endl << "New table will have Rows : " << i << " Column : " << j;

        int index=0;
        for(int row = 0 ; row < i; row++)
        {
            for(int col = 0; col < j; col++)
            {
                tempo[row][col] = array[index];
                index++;
            }
        }

        cout<<"\n New Double Dimension array :- \n ";
        for(int row = 0 ; row<i; row++)
        {
            for(int col = 0; col < j; col++)
            {
                cout << " " << tempo[row][col];
            }
            cout << endl;
        }
    }
    return 0;
}

int pascal()
{
    cout << "Question 2" << endl << endl;

    int p[14][14];
    int n;
    int i, j;

     cout << "Enter degree N of triangle (max.13) : ";
     cin >> n;

    while (n>13||n<0);

    for (i=0; i<=n; i++)
    {
        p[i][i]=1;
        p[i][0]=1;
        for (j=1; j<i; j++)
        {
            p[i][j] = p[i-1][j] + p[i-1][j-1];
        }
     }

    cout << "Pascal triangle: " << endl;
    for (i=0; i<=n; i++)
    {
        cout << "[N = " << i << "] ";
        for (j=0; j<=i; j++)
        {
             if (p[i][j])
             {
                 cout << p[i][j] << " ";
             }
        }
        cout << endl << endl;
    }

    return 0;
}
