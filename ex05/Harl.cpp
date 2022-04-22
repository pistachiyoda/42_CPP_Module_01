#include "Harl.hpp"

Harl::Harl()
{
    _complainFuncs[0] = &Harl::debug;
    _complainFuncs[1] = &Harl::info;
    _complainFuncs[2] = &Harl::warning;
    _complainFuncs[3] = &Harl::error;

    _complaintLevels[0] = "debug";
    _complaintLevels[1] = "info";
    _complaintLevels[2] = "warning";
    _complaintLevels[3] = "error";
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (level.compare(_complaintLevels[i]) == 0)
        {
            (this->*(_complainFuncs[i]))();
            return;
        }
    }
    std::cerr << "invalid level" << std::endl;
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
