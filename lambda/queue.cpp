#include <vector>
#include <functional>
#include <iostream>

class Queue
{
public:
    Queue() = default;

    void pushBack(const std::function<int(int)> &action)
    {
        _actions.push_back(action);
    }

    // note : strong exception safety
    int run(int nb)
    {
        for (const auto &a : _actions)
            nb = a(nb);
        _actions.clear();
        return nb;
    }

private:
    std::vector<std::function<int(int)>> _actions{};
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
