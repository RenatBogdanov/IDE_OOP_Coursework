#pragma once

#ifndef IDE_CIRCULAR_LINKED_LIST
#define IDE_CIRCULAR_LINKED_LIST

#include <string>
#include <iostream>
#include "ide.h"

namespace ide_class {
    /// @brief Структура узла закольцованного списка
    struct Node
    {
        private:
            Node* next_;
            IDE* data_;
        public:
            Node();
            Node* getNext() const;
            void setNext(Node* n);
            IDE* getData() const;
            void setData(IDE* data);
    };


    /// @brief Класс закольцованного списка для хранения объектов IDE
    class IDE_LinkedList
    {
        private:
            Node* head_;
            int size_;
            IDE* lastContainer;

        public:
            IDE_LinkedList();
            ~IDE_LinkedList();

            bool isEmpty();
            int size();

            void addFirst(IDE* data);

            Node* getFirst();

            void removeFirst();

            const void printList();

            IDE getContainer();

            void sortByName();


            IDE* findByType(IdeType type);

            IDE* findByName(std::string name);

    };
}


#endif