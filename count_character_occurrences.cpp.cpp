#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	char c, buchst;
	int anzahl=0;
	ifstream datei;

	cout << "Zeichen eingeben : ";
	cin >> buchst;
	cout << "Der Text \n";
	
	datei.open("demo.txt", ios::in);
	while(datei.get(c))
	{
		if (c==buchst) anzahl++;
		cout << c;
	}
	datei.close();
	cout << "\nenthaelt " << anzahl << "mal das Zeichen " << buchst << endl ;

 system("PAUSE");
 return 0;
}

