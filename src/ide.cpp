#include "ide.h"

int IDE::id_global = 0;

void IDE::init(){
    ++id_global;
    id_ = id_global;
    adress_ = this;
}

IDE::IDE() {
    init();
    name_ = "default";
    std::cout << "Birth of new class: " << getName() << std::endl;
}

IDE::IDE(const std::string n){
    init();
    name_ = n;
    std::cout << "Birth of new class: " << getName() << std::endl;
}

IDE::~IDE(){
    std::cout << "Death of class: " << getName() << std::endl;
}


// Сеттеры
void IDE::setName(const std::string n){
    name_ = n;
}

void IDE::setVersion(const std::string v){
    version_ = v;
}

void IDE::setType(const IdeType t){
    type_ = t;
}


// Геттеры
const std::string IDE::getName() const {
    return name_;
}

const std::string IDE::getVersion() const {
    return version_;
}

const int IDE::getId() const {
    return id_;
}

const IdeType IDE::getType() const {
    return type_;
}

const IDE* IDE::getAdress() const {
    return adress_;
}