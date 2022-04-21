#ifndef HARL_HPP
#define HARL_HPP
#include <string>

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
    // void _complainFuncs[];
};
#endif

// double (*const afpOps[])(double, double) = {
//     Add,
//     Sub,
//     Mul,
//     Div,
// };
