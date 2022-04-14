#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::~Zombie()
{
    std::cout << "Destructor for " << this->name << " is called." << std::endl;
    std::cout << this->name << " is destroyed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": "
              << "BraiiiiiiinnnzzzZ..." << std::endl;
}
