#include <iostream>

using namespace std;

int main()
{   int s, i, x;
    s = 0;
    i = 0;
    while (i < 10) {
          cout << "Enter the number: ";
          cin >> x;
          s = s + x;
          i = i + 1;
    }
    cout << "The som is: " << s <<endl;
    return 0;
}
