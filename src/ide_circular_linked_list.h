#ifndef IDE_CIRCULAR_LINKED_LIST
#define IDE_CIRCULAR_LINKED_LIST

#include <string>
#include <iostream>
#include "ide.h"

struct Node
{
    private:
        IDE data;
        Node* next;
    public:
        Node(IDE);
        Node* getNext();
        void setNext(Node*);

};


/// @brief Структура закольцованного списка для хранения объектов IDE
class IDE_LinkedList
{
    private:
        Node* head;
        Node* tail;
        int size;
    public:
        IDE_LinkedList(const int s);
        ~IDE_LinkedList();
        void addFirst(IDE&);
        void addLast(IDE&);
        void addAt(int, IDE&);
        void removeFirst(IDE&);
        void removeLast(IDE&);
        void removeAt(int, IDE&);
};



#endif