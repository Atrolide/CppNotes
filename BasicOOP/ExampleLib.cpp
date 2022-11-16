#include "ExampleLib.h"
#include <iostream>

/*  To define a declared method we need to write:
           1. -> a method type (void, int, etc)
           2. -> a class name
           3. -> ::
           4. -> a method name and () / (variables needed)
           5. -> {definition inside}

So:
*/
void ExampleLib::myMethod() {
    std::cout << "Example of an outside definition!" << std::endl;
}

int ExampleLib::myAge(int fage) {
    return fage;
}
