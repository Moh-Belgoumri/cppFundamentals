#include "Person.hpp"

int main(int argc, char *argv[])
{
    Person p1 = Person("Mohammed", "Belgoumri", 21);
    std::string name = p1.getName();
    return EXIT_SUCCESS;
}