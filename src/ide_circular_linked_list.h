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
            
            Node& operator= (const Node& other);
            bool operator== (const Node& other);
    };


    /// @brief Класс закольцованного списка для хранения объектов IDE
    class IDE_LinkedList
    {
        private:
            Node* head_;
            int size_;
            IDE* lastContainer;

        public:
            /// @brief Конструктор класса IDE_LinkedList
            IDE_LinkedList();

            /// @brief Деструктор класса IDE_LinkedList
            ~IDE_LinkedList();

            /// @brief Проверка списка на пустоту
            /// @return true - список пуст; false - если есть элементы
            bool isEmpty();

            /// @brief Геттер количества элементов в списке
            /// @return количество элементов в списке
            int getSize();

            /// @brief Добавление первого элемента в список
            /// @param data Указатель на данные типа IDE
            void addFirst(IDE* data);

            /// @brief Убрать первый элемент в списке
            void removeFirst();

            /// @brief Сортировка списка по алфавиту
            void sortByName();

            /// @brief Вывод списка
            /// @return Вывод списка в консоль
            const void printList();

            /// @brief Геттер первого элемента в списке
            /// @return Первый элемент списка
            Node* getFirst();

            /// @brief Геттер контейнера данных списка
            /// @return Массив элементов списка типа IDE
            IDE getContainer();

            /// @brief Поиск элемента по типу
            /// @param type Тип элемента
            /// @return Указатель на первый встретившийся элемент
            IDE* findByType(IdeType type);

            /// @brief Поиск элемента по названию
            /// @param type Тип элемента
            /// @return Указатель на первый встретившийся элемент
            IDE* findByName(std::string name);

    };
}


#endif