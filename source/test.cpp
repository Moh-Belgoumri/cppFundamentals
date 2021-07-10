#include "include/Person.hpp"
#include "include/Tweeter.hpp"


int main(int argc, char *argv[])
{
    Person p1("Mohammed", "Belgoumri", 21); 
    {
        Tweeter t1("Fatima", "Belgoumri", 18, "@fatiBelgou");
    }
    std::cout << "After innermost block" << " " << std::endl;
    std::string name = p1.getName();
    return EXIT_SUCCESS;
}