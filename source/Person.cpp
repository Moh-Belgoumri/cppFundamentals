#include "include/Person.hpp"

std::string Person::getName()
{
    return firstName + " " + lastName;
}

Person::Person(std::string first, std::string last, int arbitrary): 
    firstName(first), 
    lastName(last), 
    arbitraryNumber(arbitrary)
    {
        std::cout << "constructing " << firstName << " " << lastName << std::endl;
    }

Person::Person(): arbitraryNumber(0)
{
    std::cout << "constructing " << firstName << " " << lastName << std::endl;
}

Person::~Person()
{
    std::cout << "destructing " << firstName << " " << lastName << std::endl;
}
    