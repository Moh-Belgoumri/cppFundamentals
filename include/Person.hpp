#include <bits/stdc++.h>

class Person
{
    private:
        std::string firstName;
        std::string lastName;
        int arbitraryNumber;
    public:
        std::string getName();
        Person(std::string first, std::string last, int arbitrary);
        Person();
        ~Person();
};