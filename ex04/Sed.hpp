#ifndef SED_HPP
#define SED_HPP

#include <fstream>
#include <string>
#include <iostream>

class Sed
{
public:
    Sed(std::string filebame, std::string s1, std::string s2);
    ~Sed();
    void openFile();
    void generateOutFile();
    void outputWithReplace();

private:
    std::string _filename;
    std::string _s1;
    std::string _s2;
    std::ifstream _ifs;
    std::ofstream _ofs;
};

#endif
