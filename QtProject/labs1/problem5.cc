#include <iostream>
#include "problem5.h"

#define N 4

//==========Transpose Matrix==========//
void transposing(int A[][N], int B[][N])
{
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            B[i][j] = A[j][i];
}

void transpose()
{
    std::cout << "===PROBLEM 5===" << "\n1. Transpose Matrix\n" << std::endl;
    int A[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    std::cout << "Original Matrix: " << std::endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            std::cout << A[i][j] << " ";
        }
        std::cout << "\n";
    }
    int B[N][N];

    transposing(A, B);

    std::cout << "Transposed Matrix: " << std::endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
           std::cout << B[i][j] << " ";
           std::cout << "\n";
    }
}

//==========Flatten Matrix==========//
void flattening(int A[][N], int B[])
{
    for (int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            B[i] = A[i][j];
        }
    }
}

void flatten() {
    std::cout << "\n2. Flatten Matrix\n" << std::endl;
    int A[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    std::cout << "Original Matrix: " << std::endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            std::cout << A[i][j] << " ";
        }
        std::cout << "\n";
    }
    int B[N+N];

    flattening(A, B);

    std::cout << "Flattened Matrix: " << std::endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
           std::cout << B[i] << " ";
    }
}

//==========Pascal Triangle==========//
void pascaltriangle()
{
    int n;
    std::cout << "\n\n3. Pascal Triangle\n" << "Enter number of line: ";
    std::cin >> n;

    int block[n][n];

    //line iteration
    for (int line=0; line<=n; line++){
        for (int i=0; i<=line; i++)
        {
            //stating corresponding value of each line
            if (line==i || i==0){
                block[line][i] = 1; //assigning first row
            }else{
                block[line][i] = block[line - 1][i - 1] + block[line - 1][i];
                std::cout << block[line][i] << " ";
            }
        }
        std::cout << "\n";
    }

    std::cout << "===End of PROBLEM 5===\n\n" << std::endl;
}

