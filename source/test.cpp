#include <bits/stdc++.h>
#include<math.h>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[])
{
    int x;
    cout << "Enter a number, 0 or negative to exit" << endl;
    cin >> x;
    
    while (x > 0)
    {
        switch (x)
        {
            case 1:
                cout << "You entered 1" << endl;
                break;
            case 2:
            case 3: 
                cout << "You entered 2 or 3" << endl;
                break;
            case 4:
                cout << "You entered 4" << endl;
            case 5:
                cout << "You entered 5" << endl;
                break;
            default:
                cout << "You entered something else" << endl;
                break;
        }
        cout << "Enter a number, 0 or negative to exit" << endl;
        cin >> x;
    }
    return EXIT_SUCCESS;
}