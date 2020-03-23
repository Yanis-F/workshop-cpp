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

}

/*

EN NE MODIFIANT QUE LE MAIN :
Appeler la fonction callMe avec les 3 valeures contenues dans la string donnée
par getString

*/
