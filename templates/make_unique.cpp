#include <memory>
#include <iostream>

int main()
{
    auto toto = my_make_unique<std::pair<int, int>>(1, 2);

    const auto &[k, v] = *toto;
    std::cout << k << " : " << v << std::endl;
}

/*
Sans devoir modifier le main:
Créer la fonction my_make_unique qui se comporte comme std::make_unique
*/
