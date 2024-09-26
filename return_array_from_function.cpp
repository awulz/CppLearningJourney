// ***********************************************************************
//                  Arrays aus Funktionen zurückgeben
// ***********************************************************************
// Arrays können nicht als Rückgabetyp von Funktionen definiert werden.
// Auch dazu bedienen wir uns des bekannten Tricks, Arrays in eine Struktur
// zu verpacken. Hierzu ein Listing zur Demonstration.
//
// MFG Marco Meili
// ***********************************************************************

#include <iostream>

using namespace std;

struct array
	{
		int wert[3];
	};
	
struct array init_array()
	{
		int i;
		struct array z;
		for(i = 0; i < sizeof(struct array) / sizeof(int); i++)
		{
			cout << "Wert " << i << " eingeben: ";
			cin >> z.wert[i];
   		}
    return z;
	}

void output_array(struct array z)
	{
		int i;
		for(i = 0; i < sizeof(struct array) / sizeof(int); i++)
		cout << z.wert[i] << "\t";
   		cout << "\n";
	}
	
int main()
{
	struct array new_array;
	
	/* Array als Rückgabewert in einer Struktur verschachtelt */
	new_array = init_array();
	
	/* call-by-value */
	output_array(new_array);

   	system("PAUSE");
	return 0;
}


