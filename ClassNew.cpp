#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    char dot1, dot2, dot3;

    cout << "Enter IPv4 Address: ";
    cin >> a >> dot1 >> b >> dot2 >> c >> dot3 >> d;

    cout << "\nGiven IP Address: "
         << a << "." << b << "." << c << "." << d;

    cout << "\nClass: ";

    if (a >= 1 && a <= 126)
        cout << "A";
    else if (a >= 128 && a <= 191)
        cout << "B";
    else if (a >= 192 && a <= 223)
        cout << "C";
    else if (a >= 224 && a <= 239)
        cout << "D";
    else if (a >= 240 && a <= 255)
        cout << "E";
    else
        cout << "Invalid IP Address";

    return 0;
}