#include <iostream>
using namespace std;

int calculation(int &x, int y, int &z);

int main()
{
    int x, y, z, ris;

    cout << "Insert x: " << endl;
    cin >> x; // 2
    cout << "Insert y: " << endl;
    cin >> y; // 5
    cout << "Insert z: " << endl;
    cin >> z; // 6

    ris = calculation (x,y,z); // ris = 14

    cout << "The result is: " << ris << endl;
    cout << x + y << endl; // 7 + 5 = 12
    cout << x - z << endl; // 7 - 6 = 1
    return 0;
}

int calculation(int &x, int y, int &z)
{
    int r;
    x = x + y; // 2 + 5 = 7
    cout << x << endl;
    y = x - z; // 7 - 6 = 1
    cout << y << endl;
    r = x + y + z; // 7 + 1 + 6 = 14
    return r;
}

