#include "Zombie.hpp"

#define Num_of_zombie 5

int main()
{
    Zombie *zombie;
    std::cout << "~ Create zombie horde by ZombieHorde function. ~" << std::endl;
    zombie = zombieHorde(Num_of_zombie, "Alice");
    for (int i = 0; i < Num_of_zombie; i++)
    {
        std::cout << "Zombie No." << zombie[i].getNum() << std::endl;
        zombie[i].announce();
    }
    std::cout << std::endl;

    delete[] zombie;

    return (0);
}