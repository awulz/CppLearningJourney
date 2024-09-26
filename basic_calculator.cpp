#include <iostream>

using namespace std;

int sum (int x,int y);
int substraction (int x,int y);
int multiplication (int x,int y);
double division (double x,double y);
int power (int x, int y);

int main ()
{
	char Eingabe;
	int a, b, c;
	cout << "Press 1 to make the sum the two numbers." << endl;
	cout << "Press 2 to make the subtraction between two numbers." << endl;
	cout << "Press 3 to make the multiplication of two numbers. "<< endl;
	cout << "Press 4 to make the division between two numbers. "<< endl;
	cout << "Press 5 to make the power between two numbers. "<< endl;
	cin >> Eingabe;

	switch(Eingabe)
	{
		case '1':
			cout << "Enter the numbers: " << endl;
			cin >> a >> b;
			c = sum(a, b);
			cout<< "The sum is: " << c << endl;
			break;
			
		case '2':
			cout << "Enter the first number: " << endl;
			cin >> a;
			cout << "Enter the second number: " << endl;
			cin >> b;
			c = substraction(a, b);
			cout << "The substraction is: " << c << endl;
			break;
			
		case '3':
			cout << "Enter the first number: " << endl;
			cin >> a;
			cout << "Enter the second number: " << endl;
			cin >> b;
			c = multiplication(a, b);
			cout << "The multiplication is: " << c << endl;
			break;
			
		case '4':
			cout << "Enter the first number: " << endl;
			cin >> a;
			cout << "Enter the second number: " << endl;
			cin >> b;
			c = division (a, b);
			cout << "The division is: " << c << endl;
			break;
			
        case '5':
            cout << "Insert the base: ";
            cin >> a;
            cout << "Insert the exponent: ";
            cin >> b;
            c = power(a, b);
            cout << "The power is: " << c << endl;
            break;
            
		default:
			cout << "You have not entered a valid key! " << endl;
			break;
	}
	return 0;
}

//Funktionen
int sum(int x,int y)
{
	int z;
	z = x + y;
	return z;
}

int substraction(int x,int y)
{
	int z;
	z = x - y;
	return z;
}

int multiplication(int x,int y)
{
	int z;
	z = x * y;
	return z;
}

double division(double x,double y)
{
	double z;
	z = x / y;
	return z;
}

int power(int x, int y)
{
    int z = 1, i = 0;
    while (i < y)
    {
        z = z * x;
        i++;
    }
    return z;
}

