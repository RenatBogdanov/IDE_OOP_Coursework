#ifndef CIRCULAR_LINKED_LIST_IDE
#define CIRCULAR_LINKED_LIST_IDE

#include <string>
#include <iostream>
#include "ide.h"

/// @brief Структура закольцованного списка для хранения объектов IDE
struct LinkedList
{
    IDE data;
    void SayHello() {
        std::cout << "Hello, I'm list!\n";
    };
};



#endif