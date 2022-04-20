#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
    std::cout << "Destructor for " << _name << " is called." << std::endl;
    std::cout << _name << " is destroyed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << ": "
              << "BraiiiiiiinnnzzzZ..." << std::endl;
}
