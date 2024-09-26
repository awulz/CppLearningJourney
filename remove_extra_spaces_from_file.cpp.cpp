#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	char c, voriges ='a';
	ifstream datei;
	datei.open("text.txt", ios::in);
	// Datei bis ans Ende auslesen und zeigen
	while(datei.get(c))
	{
		if (!(voriges==' ' && c==' '))
			cout << c;
			voriges=c;
	}
	datei.close();

	system("PAUSE");
	return 0;
}

