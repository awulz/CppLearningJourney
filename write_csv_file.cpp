#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	ofstream textDatei("datei_schreiben.csv");
	
	int anzahl = 3;
	double preis = 1.40;
	string bezeichnung = "Apfel, Bio";
	
	ostringstream preisStream;
	preisStream << preis;
	string preisString = preisStream.str();
	replace(preisString.begin(), preisString.end(), '.', ',');
	
	if(textDatei)
	{
		textDatei << anzahl << ";" << preisString << ";" << bezeichnung << endl;
		textDatei << "12;0,85;Birne" << endl;
	}
	else
		cout << "Dateifehler" << endl;
}

