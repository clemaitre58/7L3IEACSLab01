#include <iostream>
#include "problem2.h"

void problem2() {
    std::cout << "===PROBLEM 2===" << std::endl;
    int x[] = {1,2,3,4,5,6,7,8,9,10};
    int y = sizeof(x)/sizeof(x[0]);

    for(int i=0; i<y; i++) {
        std::cout <<"f(" << x[i] << ") = sin(" << x[i] << ") + ln(" << x[i] << ")" << std::endl;
    }
    std::cout << "===End of PROBLEM 2===\n\n" << std::endl;
}
