#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
	FILE *Testdatei;
	string daten;
	
	Testdatei = fopen("Beispiel.dat", "w");
	if(!Testdatei)
		{
		cout <<"Fehler mit fopen vorhanden!!!";
		getch();
		exit(1); //Abbruch mit Fehlercode
		}
	else
		{
		// weitere Verarbeitung der Datei
		}
	
	return 0;
}
