#include "Person.hpp"

std::string Person::getName()
{
    return firstName + " " + lastName;
}