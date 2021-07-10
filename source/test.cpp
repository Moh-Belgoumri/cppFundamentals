#include "include/Person.hpp"
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    Person p1("Mohammed", "Belgoumri", 21); 
    Person p2("Fatima", "Belgoumri", 18);
    cout << p1.getName() << " is ";
    if (!(p1 < p2)) cout << "not ";
    cout << "less than " << p2.getName() << endl;
    cout << p1.getName() << " is ";
    if (!(p1 < 300)) cout << "not ";
    cout << "less than 300" << endl;
    cout << 300 << " is ";
    if (!(300 < p1)) cout << "not ";
    cout << "less than " << p1.getName() << endl;
    return EXIT_SUCCESS;
}

