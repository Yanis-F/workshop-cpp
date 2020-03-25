#include <iostream>
#include <cassert>
#include <string>


////////////////////////////////////////////////////////////////////////////////


int main()
{
    Array<std::string, 3> s;
    Array<int, 1> i;

    s[0] = "Hello ";
    s[1] = "world";
    s[2] = " ! ";

    i[0] = 42;

    std::cout << s[0] << s[1] << s[2] << i[0] << std::endl;
}

/*
Sans devoir modifier le main :
Créer la classe template Array, qui prend en argument de template le type de
donnée contenue dans l'array, et la taille de l'array.
Overload l'operateur [] pour pouvoir accéder aux elements de l'array

*/