#include <vector>
#include <functional>
#include <iostream>

class Queue
{
public:
    Queue() = default;

private:
};


int main()
{
    Queue q;

    q.pushBack([](int i) { return i * 2; });
    q.pushBack([](int i) { return i + 2; });
    q.pushBack([](int i) { return i / 2; });

    std::cout << q.run(4) << std::endl; // Expect '5'
    std::cout << q.run(2) << std::endl; // Expect '2' (no actions)
}

/*

Ajouter les methodes pushBack et run à la classe Queue tel que :

pushBack permet de queue une operation à effectuer,
run prend un int en paramètre, qui sera la valeure initiale, et effectue les
actions dans la queue une par une en les cosommant, et en donnant la sortie
d'une action comme entrée à la suivante. Enfin, run return le resultat final.

Exemple :

Parametre : 4
(4)  -> 4 * 2 = 8
(8)  -> 8 + 2 = 10
(10) -> 10 / 2 = 5
Resultat : 5

*/