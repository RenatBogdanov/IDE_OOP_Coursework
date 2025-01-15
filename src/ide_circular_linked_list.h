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
        Node* getNext() const;
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
        IDE_LinkedList();
        ~IDE_LinkedList();

        void addFirst(IDE& data);
        void addLast(IDE& data);
        void addAt(int index, IDE& data);

        void removeFirst(IDE& data);
        void removeLast(IDE& data);
        void removeAt(int index, IDE& data);
        void removeByValue(IDE& data);

        const void printList();
        void sortByName();
        IDE* findByType(IdeType type);
        IDE* findByName(std::string name);
        IDE* toArray(int& size);

};



#endif