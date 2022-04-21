#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
}

Sed::~Sed()
{
}

void Sed::openFile()
{
    _ifs.open(_filename);
    if (!_ifs.is_open())
    {
        std::cerr << "failed to open " << _filename << std::endl;
        std::exit(1);
    }
}

void Sed::generateOutFile()
{
    _ofs.open(_filename + ".replace");
    if (!_ofs.is_open())
    {
        std::cerr << "failed to open " << _filename << ".replace" << std::endl;
        std::exit(1);
    }
}

void Sed::outputWithReplace()
{
    char c;
    std::string tmp = "";

    while (_ifs.get(c))
    {
        std::cout << c;
        tmp += c;
        if (tmp.compare(_s1) == 0)
        {
            _ofs << _s2;
            tmp = "";
        }
        else if (tmp != _s1.substr(0, tmp.length()))
        {
            _ofs << tmp;
            tmp = "";
        }
    }
    if (tmp != "")
        _ofs << tmp;
    _ofs.close();
}
