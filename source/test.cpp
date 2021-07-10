#include <bits/stdc++.h>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[])
{
    int x, y;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    cout << x << " ";

    if (x > y) cout << "is lareger than ";
    else cout << "is not lareger than ";
    cout << y << endl;
    if (x + y > 10) cout << "Thanks for choosing larger numbers" << endl; 
    return EXIT_SUCCESS;
}