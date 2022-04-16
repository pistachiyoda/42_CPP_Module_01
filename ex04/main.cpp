#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "invalid args" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream ifs(argv[1]);
    if (!ifs)
    {
        std::cerr << "failed to open " << filename << std::endl;
        return 1;
    }
    std::ofstream ofs(filename + ".replace");
    if (!ofs)
    {
        std::cerr << "failed to open " << filename << ".replace" << std::endl;
        return 1;
    }
    std::string tmp = "";
    while (!ifs.eof())
    {
        char c;
        ifs.get(c);
        tmp += c;
        if (tmp == s1)
        {
            ofs << s2;
            tmp = "";
        }
    }
    if (tmp != "")
        ofs << tmp;
    ofs.close();
    return 0;
}