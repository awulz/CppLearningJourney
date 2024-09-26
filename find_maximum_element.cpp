#include <iostream>

using namespace std;

int main()
{
  	int v[10];
	int max = 0, n;
	cout << "Insert the dimension: ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
       cout << "Insert a value: ";
	   cin >> v[i];
    }
    max = v[0];
	for(int i = 0; i < n; i++)
	{
       if (max < v[i]) max = v[i];
    }
    cout << "The maximum vector element is: " << max;
    return 0;
}
