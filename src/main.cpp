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


    ide::IDE first2("a_first2");
    ide::IDE second2("b_second2");
    ide::IDE third2("c_third2");
    ide::IDE fourth2("d_fourth2");  

    ide::IDE_LinkedList linked_list2;
    linked_list2.addFirst(&first2);
    linked_list2.addFirst(&second2);
    linked_list2.addFirst(&third2);
    linked_list2.addFirst(&fourth2);

    // linked_list.printList();
    // linked_list2.printList();

    linked_list += linked_list2;

    linked_list.printList();
    

    return 0;
}