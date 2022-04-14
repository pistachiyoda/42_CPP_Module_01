#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombiehorde;

    zombiehorde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombiehorde[i].setNum(i + 1);
        zombiehorde[i].setName(name);
    }
    return (zombiehorde);
}