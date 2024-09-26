#include <iostream>

using namespace std;

void loadarray(int v[], int dim);
void printarray(int v[], int dim);
int sumarray(int v[], int dim);
double calculatemeatarray(int v[], int dim);
int minarray(int v[], int dim);
int maxarray(int v[], int dim);

int main()
{
    int sum, dim, meat, min0, max0 = 100, max1;
    int vet[max0];
    cout << "Enter the size of the vector: " << endl;
    cin >> dim;
    loadarray(vet, dim);
    cout << " " << endl;
    printarray(vet, dim);
    cout << " " << endl;
    sum = sumarray(vet, dim);
    cout << " " << endl;
    cout << "The sum is: " << sum << endl;
    cout << " " << endl;
    meat = calculatemeatarray(vet, dim);
    cout << "The meat of the array is: " << meat << endl;
    cout << " " << endl;
    min0 = minarray(vet, dim);
    cout << "The smallest element of the vector is: " << min0 << endl;
    max1 =  maxarray(vet, dim);
    cout << "The largest element of the vector is: " << max1 << endl;
    return 0;
}

void loadarray(int v[], int dim)
{
    for(int i = 0; i < dim; i++)
    {
        cout << "Insert the component " << i << " of the array: " << endl;
        cin >> v[i];
    }
}

void printarray(int v[], int dim)
{
    for(int i = 0; i < dim; i++)
    {
    	cout << v[i] << " ";
	}
}

int sumarray(int v[], int dim)
{
    int s = 0;
    for(int i = 0; i < dim; i++)
    {
    	s = s + v[i];
	}
    return s;
}

double calculatemeatarray(int v[], int dim)
{
    double meat;
    int s;
    s = sumarray(v, dim);
    meat = s / dim;
    return meat;
}

int minarray(int v[], int dim)
{
    int min0;
    min0 = v[0];
    for(int i = 0; i < dim; i++)
    {
        if(min0 > v[i])
        {
        	min0 = v[i];
		}
    }
    return min0;
}

int maxarray(int v[], int dim)
{
    int max1;
    max1 = v[0];
    for(int i = 0; i < dim; i++)
    {
        if(max1 < v[1])
        {
        	max1 = v[i];	
		}
    }
    return max1;
}

