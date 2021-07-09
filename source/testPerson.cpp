#include "include/Person.hpp"

int main(int argc, char *argv[])
{
    Person p1("Mohammed", "Belgoumri", 21); 
    //{
        Person p2;
    //}
    std::cout << "After innermost block" << " " << std::endl;
    std::string name = p1.getName();
    return EXIT_SUCCESS;
}