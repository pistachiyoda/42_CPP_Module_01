#include "Harl.hpp"

int main()
{
    Harl harl;

    harl.complain("info");
    harl.complain("debug");
    harl.complain("warning");
    harl.complain("error");
    harl.complain("hoge");
    harl.complain("hoge");
    harl.complain("hoge");
    harl.complain("warning");
    harl.complain("error");
    harl.complain("hoge");
}
