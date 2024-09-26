#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream textDatei("datei_schreiben_beliebig.txt", ios::in | ios::out);

	if(textDatei)
	{
      int anzahl = 8;
      double preis = 2.25;
      string bezeichnung = "Orange";
      
      cout << "Position: " << textDatei.tellp() << endl;
      textDatei.seekp(70);
      cout << "Position: " << textDatei.tellp() << endl;

      textDatei << fixed << setprecision(2);
      textDatei << right << setw(4) << anzahl
         << right << setw(8) << preis << " "
         << left << setw(20) << bezeichnung << endl;
	}
	else                   
		cout << "Dateifehler" << endl;
}

