#ifndef IDE_H
#define IDE_H

#include <string>
#include <iostream>


/// @brief Класс IDE
class IDE
{
private:
    /// @brief Название IDE
    std::string name;
public:
    /// @brief Конструктор класса IDE (без параметров)
    IDE();
    /// @brief Конструктор класса IDE (c параметрами)
    /// @param n Название класса
    IDE(std::string n);
    /// @brief Деструктор класса IDE
    ~IDE();

    /// @brief Сеттер названия IDE
    /// @param n Название класса
    void setName(std::string n);

    /// @brief Геттер названия IDE
    std::string getName();
};


#endif