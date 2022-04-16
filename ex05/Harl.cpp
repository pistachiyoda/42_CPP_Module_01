#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
    compmap["debug"] = &Harl::debug;
    compmap["info"] = &Harl::info;
    compmap["warning"] = &Harl::warning;
    compmap["error"] = &Harl::error;
}

void Harl::complain(std::string level)
{
    void (Harl::*func)(void) = this->compmap[level];
    if (!func)
    {
        std::cerr << "invalid level" << std::endl;
        return;
    }
    (this->*func)();
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
