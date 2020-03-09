#include <memory>
#include <iostream>

template <typename T, typename ...Args>
std::unique_ptr<T> my_make_unique(Args... args)
{
    return std::unique_ptr<T>(new T(args...));
}


int main()
{
    auto toto = my_make_unique<std::pair<int, int>>(1, 2);

    const auto &[k, v] = *toto;
    std::cout << k << " : " << v << std::endl;
}
