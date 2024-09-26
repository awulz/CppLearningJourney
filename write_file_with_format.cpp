#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream textDatei("datei_schreiben.txt");
	
	int anzahl = 3;
	double preis = 1.40;
	string bezeichnung = "Apfel, Bio";
	
	if(textDatei)
	{
		textDatei << anzahl << " " << preis << " " << bezeichnung << endl;
		//textDatei << "12 0.85 Birne" << endl;
	}
	else
		cout << "Dateifehler" << endl;
}

