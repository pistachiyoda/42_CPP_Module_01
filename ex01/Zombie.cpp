#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Destructor for Zombie is called." << std::endl;
    std::cout << "Zombie No." << getNum() << " is destroyed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << ": "
              << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}

void Zombie::setNum(int num)
{
    _num = num;
}

int Zombie::getNum()
{
    return (_num);
}
