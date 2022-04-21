#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
}

void Harl::complain(std::string level)
{
    std::string complaintLevels[] = {"debug", "info", "warning", "error"};

    void (Harl::*complainFuncs[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error};
    // void(Harl::_complainFuncs[])(void) = {
    //     Harl::debug,
    //     &Harl::info,
    //     &Harl::warning,
    //     &Harl::error,
    // };
    // for (int i = 0; i < 4; i++)
    // {
    //     if (level.compare(_complainList[i]) == 0)
    //         *_complainFuncs[i]();
    // }
    // void (Karen::*selectedComplaint)(void) = complaint[i];
    // void (Harl::*selectedComplain)(void) = complainFuncs[0];
    // (*selectedComplain)();
    // *(complainFuncs[0])();
    // complainFuncs[0];
    for (int i = 0; i < 4; i++)
    {
        void (Harl::*func)(void) = complainFuncs[i]; // この代入はなぜ必要...？ funcはここで宣言されている？
        if (level.compare(complaintLevels[i]) == 0)
        {
            (this->*func)(); // thisなぜ必要？
            return;
        }
    }
    std::cerr << "invalid level" << std::endl;
}

// void (*func)(void);
// void (*)(void);

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
