#include <iostream>

using namespace std;

int main()
{
    int height[8];
	int sum = 0;
	double mean;
	for(int i = 0; i < 8; i++)
	{
	     cout << "Enter the number: " << endl;
	     cin >> height[i];
    }
	for(int i = 0; i < 8; i++) sum = sum + height[i];
    mean = sum / 8.0;
    cout << "The mean is: " << mean << endl;
	return 0;
}
