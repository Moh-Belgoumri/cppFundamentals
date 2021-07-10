#include "include/Person.hpp"

std::string Person::getName() const
{
    return firstName + " " + lastName;
}

Person::Person(std::string first, std::string last, int arbitrary): 
    firstName(first), 
    lastName(last), 
    arbitraryNumber(arbitrary)
    {
        std::cout << "constructing " << getName() << std::endl;
    }

Person::Person(): arbitraryNumber(0)
{
    std::cout << "constructing " << getName() << std::endl;
}

Person::~Person()
{
    std::cout << "destructing " << getName() << std::endl;
}
    
bool Person::operator < (Person const& p) const
{
    return arbitraryNumber < p.arbitraryNumber;
}

bool Person::operator < (int n) const
{
    return arbitraryNumber < n;
}

bool operator < (int n, Person const& p)
{
    return n < p.getNumber();
}