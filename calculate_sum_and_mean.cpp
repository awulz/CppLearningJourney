#include <iostream>

using namespace std;

int main() {
    int number, vet[5000];
    double sum = 0;

    do {
        cout << "Insert a number " << endl;
        cin >> number;
    } while((number > 5000) || (number < 1));

    for(int i = 0; i < number; i++)
	{
        vet[i] = i + 1;
        cout << vet[i] << endl;
        sum = sum + vet[i];
    }

    cout << "The sum is: " << sum << endl;
    cout << "The mean is: " << sum / number << endl;
    return 0;
}
