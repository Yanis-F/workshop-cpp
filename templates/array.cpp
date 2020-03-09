#include <iostream>
#include <cassert>
#include <string>

template <typename T, int N>
class Array
{
public:
    T &operator[](int idx)
    {
        assert(idx < N);
        return _data[idx];
    }

private:
    T _data[N]{};
};

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
