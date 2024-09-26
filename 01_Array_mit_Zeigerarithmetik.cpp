#include <iostream>

using namespace std;

int main()
{
	
	int feld[10] = {1,2,3,4,5,6,7,8,9,10};
	
	// Zugriff mit Indexoperator
	cout << feld[3]   << "\n";			//Ausgabe Zahl = 4
	
	// Zugriff mit Zeigerarithmetik
	cout << *feld << "\n\n";		//Ausgabe Zahl = 1
	
	// Array: Anzahl ermitteln
	cout << "Array Groesse:   " << sizeof(feld) << "\n";
	cout << "Element Groesse: " << sizeof(feld[0]) << "\n";
	cout << "Element Anzahl:  " << sizeof(feld) / sizeof(feld[0]) << "\n\n";

	system("PAUSE");
	return 0;
}
