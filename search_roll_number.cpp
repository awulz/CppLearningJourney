#include<iostream>
using namespace std;

int main()
{
	int roll[10]={14,52,63,45,65,84,75,96,51,62};
	int r,m=0,i;
	cout<<"Rollno is given below\n";
	for(i=0;i<=9;i++)
	cout<<roll[i]<<" ";
	cout<<"\nEnter your rollno to search\n";
	cin>>r;
	for(i=0;i<=9;i++)
	{
		if(r==roll[i])
		{
			cout<<"Rollno is found at "<<i+1;
			m=1;
		}

	}
	if(m==0)
	cout<<"Not found";
}

