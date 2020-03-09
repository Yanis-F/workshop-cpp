#include <iostream>
#include <vector>
#include <algorithm>


////////////////////////////////////////////////////////////////////////////////
//
// OLD WAY
//
////////////////////////////////////////////////////////////////////////////////

class FactorOf
{
public:
    FactorOf(int fact) : _fact(fact)
    {}

    bool operator()(int i)
    {
        return i % _fact == 0;
    }

private:
    int _fact;
};

bool anyFactorOf(const std::vector<int> &col, int fact)
{
    FactorOf functor(fact);

    return std::any_of(col.begin(), col.end(), functor);
}


////////////////////////////////////////////////////////////////////////////////
//
// NEW (C++11) WAY
//
////////////////////////////////////////////////////////////////////////////////

bool anyFactorOf(const std::vector<int> &col, int fact)
{
    return std::any_of(col.begin(), col.end(),
        [fact](int i) {
            return i % fact == 0;
        }
    );
}

//////////////////////////////////////////////////////////////////////////////////

int main()
{
    std::vector<int> vec = {1, 5, 8};

    std::cout << "Any factor of 2 -> " << anyFactorOf(vec, 2) << std::endl;
    std::cout << "Any factor of 3 -> " << anyFactorOf(vec, 3) << std::endl;
    std::cout << "Any factor of 5 -> " << anyFactorOf(vec, 5) << std::endl;
}
