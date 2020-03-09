// DEMO ONLY
#include <iostream>

template <typename T>
void print(const T &val)
{
    std::cout << val << std::endl;
}


int main()
{
    print("Hello word");
    print(42);
    print<char>(42);
}
