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

    ide::IDE_LinkedList linked_list;
    linked_list.addFirst(&first);
    linked_list.addFirst(&second);
    linked_list.addFirst(&third);
    linked_list.addFirst(&fourth);

    std::cout << (linked_list && linked_list) << std::endl;

    return 0;
}