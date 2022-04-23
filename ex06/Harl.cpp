#include "Harl.hpp"

Harl::Harl()
{
    _complainFuncs[0] = &Harl::debug;
    _complainFuncs[1] = &Harl::info;
    _complainFuncs[2] = &Harl::warning;
    _complainFuncs[3] = &Harl::error;

    _complaintLevels[0] = "DEBUG";
    _complaintLevels[1] = "INFO";
    _complaintLevels[2] = "WARNING";
    _complaintLevels[3] = "ERROR";
}

int Harl::convertToNum(std::string levelStr)
{
    for (int i = 0; i < 4; i++)
    {
        if (levelStr.compare(_complaintLevels[i]) == 0)
            return i;
    }
    std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
    std::exit(1);
}

void Harl::filter(std::string levelStr)
{
    int levelNum = Harl::convertToNum(levelStr);
    switch (levelNum)
    {
        case 0 : std::cout << "[ DEBUG ]" << std::endl;
                 Harl::debug();
                 std::cout << std::endl;
        case 1 : std::cout << "[ INFO ]" << std::endl;
                 Harl::info();
                 std::cout << std::endl;
        case 2 : std::cout << "[ WARNING ]" << std::endl;
                 Harl::warning();
                 std::cout << std::endl;
        case 3 : std::cout << "[ ERROR ]" << std::endl;
                 Harl::error();
    }
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
