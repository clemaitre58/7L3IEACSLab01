#include "problem5.h"

void calculate_transpose(int matrix[6][6], int rows, int cols);

 long fact(int x)
{
    int i;
    long f=1;

    for(i=1;i<=x;++i)
    {
        f=f*i;
    }

    return f;
}
