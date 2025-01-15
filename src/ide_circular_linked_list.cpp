#include "ide_circular_linked_list.h"


// Методы узла закольцованного списка

Node::Node(IDE)
{
}

const Node *Node::getNext() const
{
    return next_;
}

void Node::setNext(Node *next)
{
    next_ = next;
}

IDE Node::getData() const {
    return data_;
}

void Node::setData(IDE data) {
    data_ = data;
}


// Методы закольцованного списка

IDE_LinkedList::IDE_LinkedList(const int s)
{
    std::cout << "Birth of list\n";
}

IDE_LinkedList::~IDE_LinkedList()
{
}

void IDE_LinkedList::addFirst(IDE &)
{
}

void IDE_LinkedList::addLast(IDE &)
{
}

void IDE_LinkedList::addAt(int, IDE &)
{
}

void IDE_LinkedList::removeFirst(IDE &)
{
}

void IDE_LinkedList::removeLast(IDE &)
{
}

void IDE_LinkedList::removeAt(int, IDE &)
{
}

void IDE_LinkedList::removeByValue(IDE &)
{
}

void IDE_LinkedList::sortByName()
{
}

IDE *IDE_LinkedList::findByType(IdeType)
{
    return nullptr;
}

IDE *IDE_LinkedList::findByName(std::string)
{
    return nullptr;
}

IDE *IDE_LinkedList::toArray(int &)
{
    return nullptr;
}


