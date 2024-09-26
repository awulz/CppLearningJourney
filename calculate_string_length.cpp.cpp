#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int stringlength(char *w);

int main(void)
{
	char wort[50];
	cout << "Wort eingeben : ";
	cin >> wort;
	cout << "Das Wort " << wort <<" hat " << stringlength(wort) << " Zeichen ." << endl ;
	system("PAUSE");
	return 0;
}

//Eine Funktion für die Zählung.
int stringlength(char *w)
{
	int i=0;
	while (w[i]!='\0') i++;
	return i;
}


