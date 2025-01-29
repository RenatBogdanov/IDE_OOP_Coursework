#include "ide_circular_linked_list.h"

namespace ide_class {
    // Методы узла закольцованного списка

    Node::Node()
    {
        //std::cout << "Birth of node\n";
    }

    Node *Node::getNext() const
    {
        return next_;
    }

    void Node::setNext(Node *next)
    {
        next_ = next;
    }

    IDE* Node::getData() const {
        return data_;
    }

    void Node::setData(IDE* data) {
        data_ = data;
    }


    // Методы закольцованного списка

    IDE_LinkedList::IDE_LinkedList()
    {
        head_ = NULL;
        size_ = 0;
    }

    IDE_LinkedList::~IDE_LinkedList()
    {
        //delete[] lastContainer;
    }

    bool IDE_LinkedList::isEmpty() const
    {
        if (size_ == 0) return true;
        else return false;
    }

    int IDE_LinkedList::getSize()
    {
        return size_;
    }

    void IDE_LinkedList::addFirst(IDE* data)
    {
        Node* newNode = new Node();
        newNode->setData(data);
        if (isEmpty()) {
            setFirst(newNode);   
            newNode->setNext(head_);
        }
        else {
            Node* temp = getFirst();
            while (temp->getNext() != head_)
            {
                temp = temp->getNext();
            }
            newNode->setNext(head_);
            temp->setNext(newNode);
            head_ = newNode;         
        }
        size_++;
    }

    void IDE_LinkedList::setFirst(Node* head) {
        head_ = head;
    }

    Node* IDE_LinkedList::getFirst()
    {
        return head_;
    }

    void IDE_LinkedList::removeFirst()
    {
        Node* newHead = head_->getNext();
        Node* temp = getFirst();
            while (temp->getNext() != head_)
            {
                temp = temp->getNext();
            }
        temp->setNext(newHead);
        delete head_;
        head_ = newHead;
        size_--;
    }

    const void IDE_LinkedList::printList() 
    {
        if (isEmpty()) return;
        Node* newHead = head_->getNext();
        Node* temp = getFirst();

        std::cout << temp << ": " << std::endl << *temp->getData();
        while (temp->getNext() != head_) {
            temp = temp->getNext();
            std::cout << temp << ": "  << std::endl << *temp->getData();
        }

    }

    IDE IDE_LinkedList::getContainer()
    {
        IDE* container = new IDE[size_];
        Node temp = *getFirst();
        for (int i = 0; i < size_; i++) {
            container[i] = *temp.getData();
            temp = *temp.getNext();
        }
        container[size_-1] = *temp.getData();

        return *container;
    }
    
    void IDE_LinkedList::sortByName()
    {
        if (isEmpty() || size_ == 1) {
            return;
        }

        bool swapped;
        Node* current_ptr;
        Node* last_ptr = nullptr;

        do {
            swapped = false;
            current_ptr = head_;

            do {
                if (current_ptr->getNext()->getData()->getName() < current_ptr->getData()->getName()) {
                    IDE* temp = current_ptr->getData();
                    current_ptr->setData(current_ptr->getNext()->getData());
                    current_ptr->getNext()->setData(temp);
                    swapped = true;
                }
                current_ptr = current_ptr->getNext();
            } while (current_ptr->getNext() != head_);

            last_ptr = current_ptr;
        } while (swapped);
    }

    IDE* IDE_LinkedList::findByType(IdeType type)
    {
        Node* temp = getFirst();
        for (int i = 0; i < size_; i++) {
            if (temp->getData()->getType() == type) {
                return temp->getData();
            }
            temp = temp->getNext();
        }
        return nullptr;
    }

    IDE *IDE_LinkedList::findByName(const std::string name)
    {
        Node* temp = getFirst();
        
        for (int i = 0; i < size_; i++) {
            if (temp->getData()->getName() == name) {
                return temp->getData();
            }
            temp = temp->getNext();
        }
        return nullptr;
    }

    Node& Node::operator=(const Node& other) {
        if (this->getData() != other.getData()) {
            this->setData(other.getData());
        }
        return *this;
    }

    bool Node::operator== (const Node&other) {
        return (this->getData() == other.getData()) && (this->getNext() == other.getNext());
    }

    bool Node::operator!= (const Node&other) {
        return !(*this==other);
    }

    std::ostream& operator<< (std::ostream& out, const IDE& ide) {
        out << " " << "Name: " << ide.getName() << std::endl;
        out << " " << "Version: " << ide.getVersion() << std::endl;
        out << " " << "Type: " << (int)ide.getType() << std::endl;
        return out;
    }
    
    bool  IDE_LinkedList::operator&& (const IDE_LinkedList& other) {
        return !((this->isEmpty()) && (other.isEmpty()));
    }

    bool  IDE_LinkedList::operator|| (const IDE_LinkedList& other) {
        return !((this->isEmpty()) || (other.isEmpty()));
    }

    bool IDE_LinkedList::operator! () {
        return this->isEmpty();
    }

    IDE_LinkedList& IDE_LinkedList::operator+= (IDE_LinkedList& other) {
        if (other.isEmpty()) return *this;
        Node* temp = this->getFirst(); // Начало первого списка
        
        while (temp->getNext() != head_) { // Идём до последнего элемента первого списка
            temp = temp->getNext();
        }

        Node* temp_other = other.getFirst(); // Начало Второго списка

        while (temp_other->getNext() != other.getFirst()) { // Идём до последнего элемента второго списка
            temp_other = temp_other->getNext();
        }

        temp->setNext(other.getFirst()); // Устанавливаем указатель на начало второго списка
        
        temp_other->setNext(this->getFirst()); // Связываем с началом первого
        return *this;
    }
}