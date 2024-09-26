// ***************************************************
// Projekt:      Array mit Funktion und ausgabe der Adressen
// Author:       M. Meili
// Programmname: ArraymitFunktion.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

void display(int a[])
{ 

  int i;
  for(i=0;i<5;i++)
  {
    cout << &a[i] << " ";
  }
}

int main()
{
  int c[5]={10,20,30,40,50};
  cout << &c[0] << " " << &c[1] << " " << &c[2] << " " << &c[3] << " " << &c[4] << "\n";
  display(c);

  cout << "\n";
  system("PAUSE");
  return 0;
}

