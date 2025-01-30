#include "ide.h"

namespace ide_class {
    int IDE::id_global = 0;

    void IDE::init(){
        ++id_global;
        id_ = id_global;
        adress_ = this;
    }

    IDE::IDE() {
        init();
        name_ = "default";
        setType(IdeType::NoneType);
    }

    IDE::IDE(const std::string n){
        init();
        name_ = n;
        setType(IdeType::NoneType);
    }

    IDE::IDE(const IDE& other) : name_(other.getName()), version_(other.getVersion()), type_(other.getType()) {
        init();
    }

    IDE::~IDE(){
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


    IDE& IDE::operator=(const IDE& other) {
        if (this != &other) {
            name_ = other.name_;
            version_ = other.version_;
            type_ = other.type_;
        }
        return *this;
    }

    bool IDE::operator== (const IDE&other) {
        return (this->getName() == other.getName()) && (this->getType() == other.getType()) && (this->getVersion() == other.getVersion());
    }
}