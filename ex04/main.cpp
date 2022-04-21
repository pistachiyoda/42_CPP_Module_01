#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "invalid args" << std::endl;
        return 1;
    }
    Sed sed(argv[1], argv[2], argv[3]);
    sed.openFile();
    sed.generateOutFile();
    sed.outputWithReplace();
    return 0;
}
