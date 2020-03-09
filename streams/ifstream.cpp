#include <fstream>
#include <iostream>

int main()
{
    std::ifstream input("file.txt");
    std::string str;

    if (input >> str)
        std::cout << "Succesfully read '" << str << "' from file" << std::endl;
    else
        std::cerr << "Failed to read from file" << std::endl;
}

/*

Lire ce que vous avez écrit dans un fichier lors de l'exo 'ofstream'

*/