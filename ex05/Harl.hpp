#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <map>

class Harl
{
public:
    Harl();
    void complain(std::string level);

private:
    void debug();
    void info();
    void warning();
    void error();
    std::map<std::string, void (Harl::*)(void)> compmap;
};
#endif
