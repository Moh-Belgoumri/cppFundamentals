#include "include/Person.hpp"
#include "include/Tweeter.hpp"


int main(int argc, char *argv[])
{
    Person p1("Mohammed", "Belgoumri", 21); 
    {
        std::cout << "Entering inner block" << std::endl;
        Tweeter t1("Fatima", "Belgoumri", 18, "@fatiBelgou");
        std::string name = t1.getName();
        std::cout << "Exiting inner block" << std::endl;
    }
    std::cout << "After innermost block" << " " << std::endl;
    std::cout << "p1: " << p1.getName() << " " << p1.getNumber() << std::endl;
    p1.setNumber(1000);
    std::cout << "p1: " << p1.getName() << " " << p1.getNumber() << std::endl;
    return EXIT_SUCCESS;
}