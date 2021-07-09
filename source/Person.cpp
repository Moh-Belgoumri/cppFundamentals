#include "include/Person.hpp"

std::string Person::getName()
{
    return firstName + " " + lastName;
}

Person::Person(std::string first, std::string last, int arbitrary): 
    firstName(first), 
    lastName(last), 
    arbitraryNumber(arbitrary){}
    