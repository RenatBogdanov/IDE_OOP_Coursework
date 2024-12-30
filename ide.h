#ifndef IDE_H
#define IDE_H

#include <string>
#include <iostream>

/**
* @brief Класс IDE
*/
class IDE
{
private:
    std::string name;
public:
    IDE();
    ~IDE();

    void setName(std::string n);
    std::string getName();
};


#endif