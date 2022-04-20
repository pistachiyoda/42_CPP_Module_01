#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    void announce(void);
    void setNum(int num);
    int getNum();
    void setName(std::string name);

private:
    int _num;
    std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
