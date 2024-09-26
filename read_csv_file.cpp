#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
using namespace std;

int main()
{
   ifstream textDatei("datei_schreiben.csv");

   if(textDatei)
   {
      int anzahl;
      double preis;
      string bezeichnung;

      while(textDatei)
      {
         string zeile;
         getline(textDatei, zeile);
         if(!textDatei)
            break;
         cout << zeile << endl;
         
         replace(zeile.begin(), zeile.end(), ';', ' ');
         replace(zeile.begin(), zeile.end(), '\t', ' ');
         istringstream zeileStream(zeile);
         cout << zeileStream.str() << endl;
         
         string preisString;
         zeileStream >> anzahl >> preisString;
         cout << anzahl << endl;
         
         replace(preisString.begin(), preisString.end(), ',', '.');
         preis = atof(preisString.c_str());
         cout << preis << endl;
         
         getline(zeileStream, bezeichnung);
         while(bezeichnung[0] == ' ')
         	bezeichnung = bezeichnung.substr(1);
         cout << bezeichnung << endl;
      }
	}
	else                   
		cout << "Dateifehler" << endl;
}

