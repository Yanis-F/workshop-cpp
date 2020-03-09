#include <fstream>

int main()
{
    std::ofstream of("file.txt");

    of << "Hello ofstream" << std::endl;
}

/*

Créer un fichier et écrire "Hello ofstream\n" dedans

*/
