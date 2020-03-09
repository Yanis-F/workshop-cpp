#include <iostream>

class Complex
{
public:
    explicit Complex(int real = 0, int imag = 0) : _real(real), _imag(imag)
    {}

    friend std::ostream &operator<<(std::ostream &os, const Complex &c);

private:
    int _real;
    int _imag;
};

std::ostream &operator<<(std::ostream &os, const Complex &c)
{
    os << c._real << "+" << c._imag << "i";
    return os;
}


////////////////////////////////////////////////////////////////////////////////

int main()
{
    Complex c{4, 5};

    std::cout << "My complex is " << c << std::endl;
}

/*

Résultat attendu :

My complex is 4+5i

*/