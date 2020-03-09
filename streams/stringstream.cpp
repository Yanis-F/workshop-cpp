#include <sstream>
#include <iostream>


std::string getString()
{
    return "Hello  \n42     3.5";
}


void callMe(const std::string &str, int integer, double doubl)
{
    std::cout   << "Sring was '" << str
                << "', Int was '" << integer
                << "', double was '" << doubl
                << "'" << std::endl;
}


////////////////////////////////////////////////////////////////////////////////

int main()
{
    std::stringstream ss{getString()};

    std::string str;
    int integer;
    double doubl;

    if (ss >> str && ss >> integer && ss >> doubl)
        callMe(str, integer, doubl);
    else
        std::cerr << "Failed to read values from string" << std::endl;
}

/*

EN NE MODIFIANT QUE LE MAIN :
Appeler la fonction callMe avec les 3 valeures contenues dans la string donnée
par getString

*/
