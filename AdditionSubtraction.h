// cpp file must include .h file, so that
// all the names are known to compiler
#include "AdditionSubtraction.h"

// We must use full name of a function, 
// that is use its class name and '::'
int AdditionSubtraction::Addition() {
    return addition;  // Body is here
}

// All functions from .h files must have a body 
int AdditionSubtraction::Subtraction() {
    return subtraction;
}
// Body of a constructor, also with full name
AdditionSubtraction::AdditionSubtraction (int num1, int num2){
    addition = num1 + num2;
    subtraction = num1 - num2;
}


