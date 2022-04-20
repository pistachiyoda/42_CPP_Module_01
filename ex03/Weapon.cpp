#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
    std::string &typeREF = _type;

    return (typeREF);
}

void Weapon::setType(std::string type)
{
    _type = type;
}
