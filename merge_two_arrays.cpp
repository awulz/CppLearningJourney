#include<iostream>
using namespace std;

int main()
{
	int first_array[50],second_array[50],third_array[100],n,i;
	cout<<"Enter number of elements\n";
	cin>>n;
	cout<<"Enter "<<n<<" integer value for array first\n";
	for(i=0;i<n;i++)
	cin>>first_array[i];
	cout<<"Enter "<<n<<" integer value for array second\n";
	for(i=0;i<n;i++)
	cin>>second_array[i];
	cout<<"After merging third array is given below\n";
	for(i=0;i<n*2;i++)
	{
		if(i<n)
		third_array[i]=first_array[i];
		else
		third_array[i]=second_array[i-n];
		cout<<third_array[i]<<" ";
	}
}

