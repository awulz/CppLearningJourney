// ***************************************************
// Author:       M. Meili
// Programmname: Verzoegerungen.cpp
// ***************************************************

#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>   //for getch()

void clrscrF()
{
	if (system("CLS")) system("clear");
}

void delayF(int *millisec)
{
	Sleep(*millisec * 1000);
}

using namespace std;

int main()
{
    clrscrF();
    int n, n1;
    cout << "Wie lange soll ich warten? Eingabe in Sekunden: \n";
    cin >> n;
    cout << "OKIDOKI!!! Ich mache jetzt eine Pause.\n";
  	cout.flush();
	delayF(&n);
    cout << "\nDie Zeit ist um. Ich hatte " << n << " Sekunden nichts gemacht.";
    getch();
//system("PAUSE");
return 0;
}

