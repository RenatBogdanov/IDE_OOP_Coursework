#ifndef IDE_CIRCULAR_LINKED_LIST
#define IDE_CIRCULAR_LINKED_LIST

#include <string>
#include <iostream>
#include "ide.h"

/// @brief Структура узла закольцованного списка
struct Node
{
    private:
        IDE data_;
        Node* next_;
    public:
        Node(IDE);
        const Node* getNext() const;
        void setNext(Node* n);
        IDE getData() const;
        void setData(IDE data);
};


/// @brief Класс закольцованного списка для хранения объектов IDE
class IDE_LinkedList
{
    private:
        Node* head_;
        Node* tail_;
        int size_;

    public:
        IDE_LinkedList(const int s);
        ~IDE_LinkedList();

        void addFirst(IDE&);
        void addLast(IDE&);
        void addAt(int, IDE&);

        void removeFirst(IDE&);
        void removeLast(IDE&);
        void removeAt(int, IDE&);
        void removeByValue(IDE&);

        const void printList();
        void sortByName();
        IDE* findByType(IdeType);
        IDE* findByName(std::string);
        IDE* toArray(int&);

};



#endif