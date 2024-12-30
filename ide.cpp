#include "ide.h"

int IDE::id = 0;

void IDE::init(){
    ++id;
}

IDE::IDE() {
    init();
    name = "default";
    std::cout << "Birth of new class: " << getName() << std::endl;
}

IDE::IDE(std::string n){
    init();
    name = n;
    std::cout << "Birth of new class: " << getName() << std::endl;
}

IDE::~IDE(){
    std::cout << "Death of class: " << getName() << std::endl;
}

void IDE::setName(std::string n){
    name = n;
}

void IDE::setVersion(std::string v){
    version = v;
}

void IDE::setType(IdeType t){
    type = t;
}



std::string IDE::getName(){
    return name;
}

std::string IDE::getVersion(){
    return version;
}

int IDE::getId(){
    return id;
}

IdeType IDE::getType(){
    return type;
}