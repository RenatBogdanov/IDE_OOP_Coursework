#pragma once

#ifndef IDE_H
#define IDE_H

#include <string>
#include <iostream>

namespace ide_class {
    /// @brief Перечисление типов IDE
    enum class IdeType {
        NoneType,
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
        std::string name_;

        /// @brief Версия IDE
        std::string version_;

        /// @brief Тип IDE
        IdeType type_;

        /// @brief Адрес объекта IDE
        IDE* adress_;

        /// @brief ID объекта
        int id_;

    public:
        /// @brief Идентификатор IDE
        static int id_global;

        // Методы класса
    private:
        /// @brief Инициализация объекта
        void init();

    public:
        /// @brief Конструктор класса IDE (без параметров)
        IDE();

        /// @brief Конструктор класса IDE (c параметрами)
        /// @param n Название класса
        IDE(const std::string n);

        IDE(const IDE& other);

        /// @brief Деструктор класса IDE
        ~IDE();


        /// @brief Сеттер названия IDE
        /// @param n Название IDE
        void setName(const std::string n);

        /// @brief Сеттер версии IDE
        /// @param v Версия IDE
        void setVersion(const std::string v);

        /// @brief Сеттер типа IDE
        /// @param t Тип IDE
        void setType(const IdeType t);


        /// @brief Геттер названия IDE
        /// @return Название IDE
        const std::string getName() const;

        /// @brief Геттер версии IDE
        /// @return Версия IDE
        const std::string getVersion() const;

        /// @brief Геттер идентификатора IDE
        /// @return Идентификатор IDE
        const int getId() const;

        /// @brief Геттер типа IDE
        /// @return Тип IDE
        const IdeType getType() const;

        /// @brief Геттер адресса объекта IDE
        /// @return Адресс объекта IDE
        const IDE* getAdress() const;

    public:
        // Перегрузка операторов
        IDE& operator= (const IDE& other);
        bool operator== (const IDE& other);


    };


    
}
#endif