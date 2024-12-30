#ifndef IDE_H
#define IDE_H

#include <string>
#include <iostream>

enum class IdeType {
    TextEditor,
    FullFeatured,
    CloudBased
};

/// @brief Класс IDE
class IDE
{
    // Поля класса
private:
    /// @brief Название IDE
    std::string name;
    /// @brief Версия IDE
    std::string version;
    /// @brief Инициализация объекта
    void init();

    IdeType type;
public:
    /// @brief Идентификатор IDE
    static int id;

    // Методы класса
public:
    /// @brief Конструктор класса IDE (без параметров)
    IDE();
    /// @brief Конструктор класса IDE (c параметрами)
    /// @param n Название класса
    IDE(std::string n);
    /// @brief Деструктор класса IDE
    ~IDE();

    /// @brief Сеттер названия IDE
    /// @param n Название IDE
    void setName(std::string n);
    /// @brief Сеттер версии IDE
    /// @param v Версия IDE
    void setVersion(std::string v);
    /// @brief Сеттер типа IDE
    /// @param t Тип IDE
    void setType(IdeType t);

    /// @brief Геттер названия IDE
    /// @return Название IDE
    std::string getName();
    /// @brief Геттер версии IDE
    /// @return Версия IDE
    std::string getVersion();
    /// @brief Геттер идентификатора IDE
    /// @return Идентификатор IDE
    int getId();
    /// @brief Геттер типа IDE
    /// @return Тип IDE
    IdeType getType();


};

#endif