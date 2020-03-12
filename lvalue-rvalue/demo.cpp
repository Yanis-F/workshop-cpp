// DEMO ONLY



int main()
{
    // Lvalue : existe en mémoire (stack ou heap), donc on peut prendre son adresse
    //          très souvent nommé dans le code
    // Rvalue : anonyme
    int a = 42;
    int b = 42 + 20;
    int c = a + b;


    // Seulement une Lvalue peut être assigné à une Rvalue
    // Une Lvalue peut etre utilisée comme une Rvalue (=implicit lvalue-to-rvalue conversion)
    int d = a;
    int e = a + 1;
}


////////////////////////////////////////////////////////////////////////////////

int getValue()
{
    return 42;
}

int main()
{
    getValue() = 43; // error
}

////////////////////////////////////////////////////////////////////////////////

int main()
{
    int a = 42;

    int &lref = a;
    int *lptr = &a;

    int &rref = 42;     // error
    int *rptr = &42;    // error
}

////////////////////////////////////////////////////////////////////////////////

int main()
{
    const int &lcref = 42; // OK ! const lvalue ref peut valoir une rvalue.

    // C'est en réalité juste un raccourcit pour
    const int _foo_ = 42;
    const int &lcref = _foo_;
}

////////////////////////////////////////////////////////////////////////////////

int add(const int &a, const int &b)
{
    return a + b;
}

int main()
{
    int a = 42;

    int foo = add(a, 2); // On peut filer des rvalue ou des lvalue. magie
}

////////////////////////////////////////////////////////////////////////////////

int main()
{
    // c++11
    int &&rref = 42;

    // permet de Move (cf. chap Move et Copy)
}
