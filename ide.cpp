#include "ide.h"

IDE::IDE() {
    std::cout << "Birth of new class!" << std::endl;
}

IDE::IDE(std::string n)
{
    name = n;
    std::cout << "Birth of new class: " << name << "!" << std::endl;
}

IDE::~IDE()
{
    std::cout << "Death of class!" << std::endl;
}

void IDE::setName(std::string n)
{
    name = n;
}

std::string IDE::getName()
{
    return name;
}