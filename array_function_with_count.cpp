// ***************************************************
// Projekt:      Arrays an Funktionen mit Anzahl Info
// Author:       M. Meili
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iomanip>
#include <conio.h>

#define MAX 10

using namespace std;

void function(int feld[], int n_anzahl)
{
	int i;
	for(i = 0; i < n_anzahl; i++)
	{
		cout << feld[i];
	} 	
	cout << "\n";
}

int main()
{
	int val[MAX];
	int i;
	for(i = 0; i < MAX; i++)
	{
		val[i] = i+1;	
	}

	function(val, MAX);
	cout << "\n";   

	system("PAUSE");
	return 0;
}

