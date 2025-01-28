#include "ide.h"
#include "ide_circular_linked_list.h"

#include <iostream>
#include <string>

#define ide ide_class

int main() {
    ide::IDE first("first");
    ide::IDE second("second");
    ide::IDE third("third");
    ide::IDE fourth("fourth");  

    ide::IDE_LinkedList linked_list;
    linked_list.addFirst(&first);
    linked_list.addFirst(&second);
    linked_list.addFirst(&third);
    linked_list.addFirst(&fourth);

    linked_list.getFirst()->getNext()->getData()->setType(ide_class::IdeType::CloudBased);

    if (linked_list.findByName("111111111111111")) {
        std::cout << linked_list.findByName("111111111111111")->getName() << std::endl;
    }
    else {
        std::cout << "Cannot find by name" << std::endl;
    }

    return 0;
}