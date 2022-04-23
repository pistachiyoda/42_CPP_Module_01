#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
    {
        std::cerr << "Invalid args." << std::endl;
        return 1;
    }
    harl.filter(argv[1]);
    std::cout << "\n";
    return 0;
}
