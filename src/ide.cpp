#include "ide.h"

namespace ide_class {
    int IDE::id_global = 0;

    void IDE::init(){
        ++id_global;
        id_ = id_global;
        adress_ = this;
        setType(IdeType::NoneType);
    }

    IDE::IDE() {
        init();
        name_ = "default";
    }

    IDE::IDE(const std::string n){
        init();
        name_ = n;
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
}