#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Destructor for Zombie is called." << std::endl;
    std::cout << "Zombie No." << this->getNum() << " is destroyed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": "
              << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::setNum(int num)
{
    this->num = num;
}

int Zombie::getNum()
{
    return (this->num);
}