#include <iostream>
#include <time.h> // library to use the RANDOM function
#include <stdlib.h>

using namespace std;

int main()
{
    int v1[20], v2[20], v3[20];
	srand (time(0)); // command to change the number generation cycle
	for(int i = 0; i < 21; i++)
	{
        v1[i] = rand()% 71-20; // command to generate numbers from -20 to 50
		cout << "The first number is: " << v1[i] << endl;
		v2[i] = rand()% 71-20;
		cout << "The second number is: " << v2[i] << endl;
		v3[i] = v1[i] + v2[i];
		cout << "The sum is: " << v3[i] << endl;
	}
	return 0;
}

