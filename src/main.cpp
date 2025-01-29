#include "ide.h"
#include "ide_circular_linked_list.h"

#include <iostream>
#include <string>

#define ide ide_class

int main() {
    ide::IDE first("a_first");
    ide::IDE second("b_second");
    ide::IDE third("c_third");
    ide::IDE fourth("d_fourth");  

    first = second;
    std::cout << first.getName() << std::endl;

    return 0;
}