#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
    std::string &typeREF = this->type;

    return (typeREF);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}