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
    if (_s1 == "" | _s2 == "")
    {
        std::cerr << "Set more than 1 character string s1, s2." << std::endl;
        std::exit(1);
    }

    std::string buf;
    bool isFirstLine = true;
    while (std::getline(_ifs, buf))
    {
        if (!isFirstLine)
            _ofs << std::endl;
        else
            isFirstLine = false;

        std::string out = "";
        while (buf != "")
        {
            size_t pos = buf.find(_s1);
            if (pos == std::string::npos)
            {
                out += buf;
                break;
            }
            out += buf.substr(0, pos);
            out += _s2;
            buf.erase(0, pos + _s1.length());
        }
        _ofs << out;
    }
    _ofs.close();
}
