#include <bits/stdc++.h>
#include "include/Utility.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(int argc, char *argv[])
{
    int x;
    cout << "Enter a number" << endl;
    cin >> x;

    
    if (isPrime(x)) cout << x << " is prime" << endl;
    else cout << x << " is not prime" << endl;
    if (is2MorePrime(x)) cout << x << " + 2 is prime" << endl;
    else cout << x << " +2 is not prime" << endl;
    return EXIT_SUCCESS;
}


