#include "include/Utility.hpp"

bool isPrime(int x)
{
    bool result = true;
    for (int factor = 2; factor <= sqrt(x); factor++)
    {
        int quotient = x / factor;
        if (factor * quotient == x)
        {
            cout << "Factorization found: " << factor << " * " << quotient << endl;
            result = false;
            break;
        }
    }
    return result;
}

bool is2MorePrime(int& x)
{
    x += 2;
    return isPrime(x);
}