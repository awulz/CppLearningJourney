#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream textDatei("datei_schreiben.txt");
	
	int anzahl;
	double preis;
	string bezeichnung;
	
	while(textDatei)
	{
		textDatei >> anzahl;
		if(!textDatei)
			break;
			
		textDatei >> preis;
		
		getline(textDatei, bezeichnung);
		while(bezeichnung[0] == ' ')
			bezeichnung = bezeichnung.substr(1);
		
		cout << anzahl << " " << preis << " |" << bezeichnung << "|" << endl;
	}
}

