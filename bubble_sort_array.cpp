#include<iostream>
using namespace std;

int main()
{
	int a[10]={50,40,3,48,95,74,16,15,47,6};
	int i,j,temp;
	cout<<"Data before sorting is given:\n";
	for(i=0;i<10;i++)
	cout<<a[i]<<" ";
	for(i=0;i<10;i++)
     {
       for(j=0;j<10-i;j++)
         {
          if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
         }
    }
    cout<<"\nData After sorting in ascending order is given:\n";
	for(i=0;i<10;i++)
	cout<<a[i]<<" ";
}

