#include "ide.h"
#include "ide_circular_linked_list.h"

#include <iostream>
#include <string>

#define ide ide_class

int main() {
    ide::IDE first("1");
    ide::IDE second("2");
    ide::IDE third("3");
    ide::IDE fourth("4");  

    ide::IDE_LinkedList linked_list;
    linked_list.addFirst(first);
    linked_list.printList();
    std::cout << std::endl;

    linked_list.addFirst(second);
    linked_list.printList();
    std::cout << std::endl;

    linked_list.addFirst(third);
    linked_list.printList();
    std::cout << std::endl;

    linked_list.addFirst(fourth);
    linked_list.printList();
    std::cout << std::endl;

    ide_class::Node* tempFirst = linked_list.getFirst();
    std::cout << "tempFirst = " << tempFirst << std::endl;
    std::cout << "tempFirst = " << tempFirst->getData().getName() << std::endl << std::endl;

    linked_list.removeFirst();
    linked_list.printList();
    std::cout << std::endl;

    std::cout << "tempFirst = " << tempFirst->getData().getName() << std::endl << std::endl;

    linked_list.printList();

    
    ide::IDE* container = new ide::IDE[linked_list.size()];
    *container = linked_list.getContainer();

    std::cout << container[linked_list.size()-1].getName() << std::endl;

    return 0;
}