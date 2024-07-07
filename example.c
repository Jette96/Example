#include "example.h"
#include "confi.h"

int calculate (int number) {
    number = number * 2; 
    #ifdef DEBUG
        printResult(number);
    #endif
    return number;
}

