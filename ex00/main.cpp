#include "Zombie.hpp"

int main()
{
    Zombie *zombie2;

    std::cout << "~ Create zombie1 called Alice from Zombie class. ~" << std::endl;
    Zombie zombie1("Alice");
    zombie1.announce();
    std::cout << std::endl;

    std::cout << "~ Create zombie2 called Bob by newZombie function. ~" << std::endl;
    zombie2 = newZombie("Bob");
    zombie2->announce();
    delete zombie2;
    std::cout << std::endl;

    std::cout << "~ Create zombie3 called Charlie by randomChump function. ~" << std::endl;
    randomChump("Charlie");
    std::cout << std::endl;

    return (0);
}
