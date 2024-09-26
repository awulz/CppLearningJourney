#include<iostream>
using namespace std;

int main()
{
	int a[5]={10,20,30,50,90};
	int b[5],i;
	cout<<"First array is given below\n";
	for(i=0;i<=4;i++)
	{
		cout<<a[i]<<" ";
		b[i]=a[i];
	}
	cout<<"\nAfter copy second array is given below\n";
    for(i=0;i<=4;i++)
    {
    	cout<<b[i]<<" ";
	}

}

