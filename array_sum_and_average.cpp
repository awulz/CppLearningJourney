#include <iostream>
using namespace std;

void insert(int v[10]);
void calculation(int v[10], int &sum, float &avg);

int main()
{
    int s = 0;
    float m = 0;
    int v[10];

    insert(v);
    calculation(v,s,m);

    cout << "The sum is: " << s << endl;
    cout << "The average is: " << m << endl;

    return 0;
}

void insert(int v[10])
{
    for(int i=0; i<10; i++)
    {
        cout << "Insert the element " << i << " of the array: " << endl;
        cin >> v[i];
    }
}

void calculation(int v[10], int &sum, float &avg)
{
    for(int i=0; i<10; i++)
        sum = sum + v[i];
    avg = sum / 10;
}

