#include "ide_circular_linked_list.h"


// Методы узла закольцованного списка

Node::Node(IDE)
{
}

Node *Node::getNext() const
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

IDE_LinkedList::IDE_LinkedList()
{
}

IDE_LinkedList::~IDE_LinkedList()
{
}

void IDE_LinkedList::addFirst(IDE& data)
{

}

void IDE_LinkedList::addLast(IDE& data)
{

}

void IDE_LinkedList::addAt(int index, IDE& data)
{

}

void IDE_LinkedList::removeFirst(IDE& data)
{

}

void IDE_LinkedList::removeLast(IDE& data)
{

}

void IDE_LinkedList::removeAt(int index, IDE &data)
{

}

void IDE_LinkedList::removeByValue(IDE &data)
{

}

void IDE_LinkedList::sortByName()
{

}

IDE *IDE_LinkedList::findByType(IdeType type)
{
    return nullptr;
}

IDE *IDE_LinkedList::findByName(std::string name)
{
    return nullptr;
}

IDE *IDE_LinkedList::toArray(int &)
{
   return nullptr;
}


