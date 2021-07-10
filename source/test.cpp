#include <bits/stdc++.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(int argc, char *argv[])
{
    int x = 99;
    while (x > 0)
    {
        cout << "Enter a number, 0 or negative to exit" << endl;
        cin >> x;
        string sign = x > 0? "positive" : "0 or negative";
        cout << "Your number is " << sign << endl; 
    }
    return EXIT_SUCCESS;
}


