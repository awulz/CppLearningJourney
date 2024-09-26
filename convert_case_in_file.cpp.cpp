#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
 char c;
 ifstream datei;
 datei.open("text.txt", ios::in);
 if (!datei)
 {
	 cout << "Datei nicht gefunden !\n";
	 return 1;
 }

 while(datei.get(c))
 {
	 if (c >='a' && c <='z') c=c+('A'-'a');
	 else if (c >='A' && c <='Z') c=c-('A'-'a');
	 cout << c;
 }

 datei.close();
 system("PAUSE");
 return 0;
}

